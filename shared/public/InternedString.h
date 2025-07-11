#pragma once

#include <mutex>
#include <stdexcept>
#include <string>
#include <unordered_set>
#include <vector>

// TODO: - Names - not _really_ an interned string, because its not... a string. StringHandle, StringRef, ...? ugh.
//               - StringInterner -> StringTable?
// - initialization from static strings
// - overloads for c_strings
// - use better hash functions?
// - doc
//

class InternedString {
  public:
    using StringId = uint32_t;

  public:
    InternedString(StringId id)
        : _id(id) {}

    bool operator==(const InternedString &o) const { return _id == o._id; }

    bool operator!=(const InternedString &o) const { return _id != o._id; }

    StringId id() const { return _id; }

  private:
    StringId _id;
};

namespace std {
template <> struct hash<InternedString> {
    size_t operator()(const InternedString &c) const { return c.id(); }
};
} // namespace std

class StringInterner {
  public:
    StringInterner(StringInterner &&o)
        : strings(std::move(o.strings))
        // must copy set here because of the odd self-reference in StringRefHash/Equal (see below). Rehashes everything :(
        // XXX perf problem because return values?
        , set(o.set.begin(), o.set.end(), o.set.bucket_count(), StringRefHash{*this}, StringRefEqual{*this}){};

  private:
    // 
    StringInterner()
        : strings()
        , set(0, StringRefHash{*this}, StringRefEqual{*this}){};

    // Create from a parent StringInterner. Looks like a copy constructor, but
    // we want to avoid accidentally copying this.
    StringInterner(const StringInterner &parent) 
        : strings(parent.strings)
        // XXX uuuurgh
        , set(parent.set.begin(), parent.set.end(), parent.set.bucket_count(), StringRefHash{*this}, StringRefEqual{*this}){};

  public:
    static StringInterner createEmpty() {
        return StringInterner();
    }

    static StringInterner createWithParent(const StringInterner &parent) {
        return StringInterner(parent);
    }

    InternedString add(const std::string &s) {
        std::lock_guard lock(mutex);

        size_t nextId = strings.size();
        if (nextId >= std::numeric_limits<InternedString::StringId>::max()) {
            throw new std::runtime_error("string table full");
        }

        insertionCandidate = &s;
        StringRef candidateRef{.idx = (InternedString::StringId)nextId};
        auto [it, isNew] = set.insert(candidateRef);
        insertionCandidate = nullptr;
        if (isNew) {
            strings.push_back(s);
            return InternedString{(InternedString::StringId)nextId};
        } else {
            return InternedString{it->idx};
        }
    }

    const std::string &get(InternedString s) const {
        std::lock_guard lock(mutex);
        return strings[s.id()];
    }

  private:
    // XXX this feels overcomplicated. We'd need the "heterogenous" lookup / insertion for unordered containers added only in c++23.

    struct StringRef {
        InternedString::StringId idx;
    };

    const std::string &resolve(const StringRef &r) const {
        if (r.idx < strings.size()) {
            return strings[r.idx];
        } else {
            return *insertionCandidate;
        }
    }

    struct StringRefEqual {
        StringInterner &interner;

        bool operator()(const StringRef &lhs, const StringRef &rhs) const { return interner.resolve(lhs) == interner.resolve(rhs); }
    };

    struct StringRefHash {
        StringInterner &interner;
        const std::hash<std::string> stringHash{};

        std::size_t operator()(const StringRef &s) const { return stringHash(interner.resolve(s)); }
    };

  private:
    mutable std::mutex mutex;
    std::vector<std::string> strings;
    std::unordered_set<StringRef, StringRefHash, StringRefEqual> set;

    // temporary value; this is the new string to be compared against, used in the StringRefCompare/Hash.
    const std::string *insertionCandidate = nullptr;
};
