//
//  MapView.swift
//  Meteo
//
//  Created by Nicolas Märki on 01.09.22.
//

import CoreLocation
import SwiftUI

@available(iOS 17.0, *)
public struct MapView: UIViewRepresentable {
    public enum UpdateMode: Equatable {
        case map
        case user
    }

    public struct Updatable<T: Equatable>: Equatable {
        public let mode: UpdateMode
        public let value: T?

        public init() {
            mode = .map
            value = nil
        }

        public init(mode: UpdateMode) {
            self.mode = mode
            value = nil
        }

        public init(mode: UpdateMode, value: T?) {
            self.mode = mode
            self.value = value
        }
    }

    public struct Camera: Equatable {
        public var center: Updatable<MCCoord>
        public var zoom: Updatable<Double>
        public var visibleRect: Updatable<MCRectCoord>
        public var mode: MCCameraMode3d = .GLOBE

        public var restrictedBounds: MCRectCoord? = nil

        public init(center: Updatable<MCCoord> = .init(),
             zoom: Updatable<Double> = .init(),
             visibleRect: Updatable<MCRectCoord> = .init(),
                    mode: MCCameraMode3d = .GLOBE,
                    restrictedBounds: MCRectCoord? = nil
        ) {
            self.center = center
            self.zoom = zoom
            self.visibleRect = visibleRect
            self.mode = mode
            self.restrictedBounds = restrictedBounds
        }

        public init(location: CLLocationCoordinate2D, 
                    zoom: Double?,
                    mode: MCCameraMode3d = .GLOBE) {
            self.center = .init(mode: .user, value: MCCoord(systemIdentifier: MCCoordinateSystemIdentifiers.epsg4326(), x: location.longitude, y: location.latitude, z: 0))
            self.zoom = .init(mode: .user, value: zoom)
            self.visibleRect = .init()
            self.mode = mode
        }

        public init(latitude: Double, 
                    longitude: Double,
                    zoom: Double?,
                    mode: MCCameraMode3d = .GLOBE) {
            self.center = .init(mode: .user, value: MCCoord(systemIdentifier: MCCoordinateSystemIdentifiers.epsg4326(), x: longitude, y: latitude, z: 0))
            self.zoom = .init(mode: .user, value: zoom)
            self.visibleRect = .init()
            self.mode = mode
        }

        public init(restrictedBounds: MCRectCoord,
                    mode: MCCameraMode3d = .GLOBE) {
            self.center = .init()
            self.zoom = .init()
            self.visibleRect = .init()
            self.restrictedBounds = restrictedBounds
            self.mode = mode
        }

        public var centerCoordinate: MCCoord? {
            center.value
        }

        public static func == (lhs: Camera, rhs: Camera) -> Bool {
            lhs.zoom == rhs.zoom
            && lhs.visibleRect == rhs.visibleRect
            && lhs.center == rhs.center
            && lhs.mode == rhs.mode
        }
    }

    let is3D: Bool

    let mapConfig: MCMapConfig

    let layers: [(any Layer)?]

    @Binding var camera: Camera

    var paddingInset: EdgeInsets?

    public init(camera: Binding<Camera>, mapConfig: MCMapConfig = MCMapConfig(mapCoordinateSystem: MCCoordinateSystemFactory.getEpsg3857System()), paddingInset: EdgeInsets? = nil, layers: [(any Layer)?], is3D: Bool = false) {
        self.layers = layers
        self.mapConfig = mapConfig
        self._camera = camera
        self.paddingInset = paddingInset
        self.is3D = is3D
    }

    public func makeUIView(context: Context) -> MCMapView {
        // reset camera values to user if the camera gets reused
        if camera.zoom.value != nil,
           camera.center.value != nil,
           camera.zoom.mode == .map,
           camera.center.mode == .map {
            camera = MapView.Camera(center: .init(mode: .user, value: camera.center.value),
                                    zoom: .init(mode: .user, value: camera.zoom.value),
                                    visibleRect: camera.visibleRect,
                                    mode: camera.mode,
                                    restrictedBounds: camera.restrictedBounds)
        }

        let mapView = MCMapView(mapConfig: mapConfig, is3D: is3D)
        mapView.backgroundColor = .clear
        mapView.camera.addListener(context.coordinator)
        mapView.camera.setRotationEnabled(false)
        if is3D {
            mapView.camera.asMapCamera3d()?.setCameraMode(camera.mode)
        }
        mapView.sizeDelegate = context.coordinator
        context.coordinator.mapView = mapView
        return mapView
    }

    public func makeCoordinator() -> MapViewCoordinator {
        return MapViewCoordinator(parent: self)
    }

    @MainActor
    fileprivate func updateCamera(_ mapView: MCMapView, _ coordinator: MapViewCoordinator) {
        guard mapView.bounds.size != .zero,
              coordinator.hasSizeChanged
        else {
            return
        }

        guard camera != coordinator.lastWrittenCamera else {
            return
        }

        if let paddingInset {
            let scale = Float(UIScreen.main.nativeScale)
            mapView.camera.setPaddingTop(scale * Float(paddingInset.top))
            mapView.camera.setPaddingBottom(scale * Float(paddingInset.bottom))
            mapView.camera.setPaddingLeft(scale * Float(paddingInset.leading))
            mapView.camera.setPaddingRight(scale * Float(paddingInset.trailing))
        }

        coordinator.ignoreCallbacks = true
        let animated = coordinator.lastWrittenCamera != nil

        if let restrictedBounds = camera.restrictedBounds {
           mapView.camera.setBounds(restrictedBounds)
           mapView.camera.setBoundsRestrictWholeVisibleRect(true)
           camera.restrictedBounds = nil
       }

        if let center = camera.center.value, let zoom = camera.zoom.value, camera.center.mode == .user, camera.zoom.mode == .user {
            mapView.camera.move(toCenterPositionZoom: center, zoom: zoom, animated: animated)
        } else if let center = camera.center.value, camera.center.mode == .user {
            mapView.camera.move(toCenterPosition: center, animated: animated)
        } else if let zoom = camera.zoom.value, camera.zoom.mode == .user {
            mapView.camera.setZoom(zoom, animated: animated)
        } else if let visibleRect = camera.visibleRect.value, camera.visibleRect.mode == .user {
            mapView.camera.move(toBoundingBox: visibleRect, paddingPc: 0, animated: animated, minZoom: nil, maxZoom: nil)
        }

        if is3D {
            mapView.camera.asMapCamera3d()?.setCameraMode(camera.mode)
        }

        coordinator.ignoreCallbacks = false
        coordinator.lastWrittenCamera = camera
    }

    @MainActor
    fileprivate func updateLayers(_ context: MapView.Context, _ mapView: MCMapView) {

        // Get description-structs of layers
        let oldLayers = context.coordinator.currentLayers
        let newLayers = layers.compactMap { $0?.interface }

        var needsInsert: [any MCLayerInterface] = []
        var needsRemoval: [any MCLayerInterface] = []

        // Find layers that...
        for layer in newLayers {
            if let _ = oldLayers.first(where: { $0 === layer }) {
                // ... existed before
            } else {
                // ... are new
                needsInsert.append(layer)
            }
        }

        // ... are not needed any more
        for layer in oldLayers {
            if !newLayers.contains(where: { $0 === layer }) {
                needsRemoval.append(layer)
            }
        }

        context.coordinator.currentLayers = newLayers

        // Schedule Task to load or onload layers if needed
        if !needsInsert.isEmpty || !needsRemoval.isEmpty {
            for layer in needsInsert {
                mapView.add(layer: layer)
            }
            for layer in needsRemoval {
                mapView.remove(layer: layer)
            }
        }
    }

    public func updateUIView(_ mapView: MapCore.MCMapView, context: Context) {
        updateLayers(context, mapView)
        updateCamera(mapView, context.coordinator)
    }
}

extension MCRectCoord {
    override open func isEqual(_ object: Any?) -> Bool {
        if let other = object as? MCRectCoord {
            return other.topLeft == topLeft
                && other.bottomRight == bottomRight
        }
        return false
    }
}

extension MCCoord {
    override open func isEqual(_ object: Any?) -> Bool {
        if let other = object as? MCCoord {
            return other.systemIdentifier == systemIdentifier
                && other.x == x
                && other.y == y
                && other.z == z
        }
        return false
    }
}

@available(iOS 17.0, *)
@MainActor
public class MapViewCoordinator: MCMapCameraListenerInterface {
    var parent: MapView
    init(parent: MapView) {
        self.parent = parent
    }

    weak var mapView: MCMapView?

    var currentLayers: [any MCLayerInterface] = []

    var ignoreCallbacks = false
    var hasSizeChanged = false
    var lastWrittenCamera: MapView.Camera?

    nonisolated
    private func updateCamera() {
        Task { @MainActor in
            guard !ignoreCallbacks else {
                return
            }

            guard mapView?.bounds.size != .zero else {
                return
            }

            guard lastWrittenCamera != nil else {
                if let mapView = mapView {
                    parent.updateCamera(mapView, self)
                }
                return
            }

            guard hasSizeChanged else {
                return
            }

            let center = mapView?.camera.getCenterPosition()
            let zoom = mapView?.camera.getZoom()

            parent.camera = MapView.Camera(
                center: .init(mode: .map, value: center),
                zoom: .init(mode: .map, value: zoom),
                visibleRect: .init(mode: .map, value: mapView?.camera.getPaddingAdjustedVisibleRect()),
                mode: parent.camera.mode,
                restrictedBounds: parent.camera.restrictedBounds
            )

            lastWrittenCamera = parent.camera
        }
    }

    nonisolated
    public func onVisibleBoundsChanged(_ visibleBounds: MCRectCoord, zoom: Double) {
        updateCamera()
    }

    nonisolated
    public func onCameraChange(_ viewMatrix: [NSNumber], projectionMatrix: [NSNumber], verticalFov: Float, horizontalFov: Float, width: Float, height: Float, focusPointAltitude: Float, focusPointPosition: MCCoord) {
        updateCamera()
    }


    nonisolated
    public func onRotationChanged(_ angle: Float) {
    }

    nonisolated
    public func onMapInteraction() {
    }
}

@available(iOS 17.0, *)
extension MapViewCoordinator: MCMapSizeDelegate {
    nonisolated
    public func sizeChanged() {
        Task { @MainActor in
            hasSizeChanged = true
            if let mapView = mapView {
                parent.updateCamera(mapView, self)
            }
        }
    }
}
