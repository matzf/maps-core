package io.openmobilemaps.mapscore;

import io.openmobilemaps.mapscore.map.util.MapTileRenderer;
import io.openmobilemaps.mapscore.map.util.OffscreenMapRenderer;
import io.openmobilemaps.mapscore.map.util.Tiled2dMapVectorLayerBuilder;
import io.openmobilemaps.mapscore.shared.map.coordinates.Coord;
import io.openmobilemaps.mapscore.shared.map.coordinates.CoordinateSystemIdentifiers;
import io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord;

import java.awt.image.BufferedImage;
import java.io.File;
import java.net.URL;

import javax.imageio.ImageIO;

public class MapsCoreTest {
    // TODO turn this into a self contained test.
    public static void main(String[] args) {
        MapsCore.initialize();

        OffscreenMapRenderer renderer = new OffscreenMapRenderer(2 * 900, 2 * 550, 1);

        URL styleJsonUrl = MapsCoreTest.class.getResource("/test-style.json");
        String resourceDir = new File(styleJsonUrl.getPath()).getParent().toString();
        System.out.println(resourceDir);

        Tiled2dMapVectorLayerBuilder.addFromStyleJson(
                renderer.getMap(),
                "name",
                styleJsonUrl.toString(),
                resourceDir,
                MapsCoreTest.class.getClassLoader(),
                "fonts");

        var bbox =
                new RectCoord(
                        new Coord(
                                CoordinateSystemIdentifiers.EPSG3857(),
                                637646.5258575683,
                                6077651.323061279,
                                0.0),
                        new Coord(
                                CoordinateSystemIdentifiers.EPSG3857(),
                                1187993.122897987,
                                5741328.40264769,
                                0.0));

        var map = renderer.getMap();
        var cam = map.getCamera();
        cam.moveToBoundingBox(bbox, 0.0f, false, null, null);

        System.out.println(cam.getVisibleRect());
        try {
            var image = renderer.drawFrame();
            ImageIO.write(image, "png", new File("frame.png"));
        } catch (Exception e) {
            System.out.printf("Could not render image %s\n", e);
            return;
        }

        System.out.println(bbox);

        MapTileRenderer tiler = new MapTileRenderer(renderer);
        for (int z = 7; z <= 10; ++z) {
            MapTileRenderer.TileRange tileRange = tiler.getTileRange(z, bbox);
            for (int xcol = tileRange.minColumn(); xcol <= tileRange.maxColumn(); ++xcol) {
                for (int yrow = tileRange.minRow(); yrow <= tileRange.maxRow(); ++yrow) {
                    try {
                        var img = tiler.renderTile(z, xcol, yrow);
                        if (!isEmpty(img)) {
                            ImageIO.write(
                                    img,
                                    "png",
                                    new File(
                                            String.format(
                                                    "tiles/tile_%d_%d_%d.png", z, xcol, yrow)));
                        }
                    } catch (Exception e) {
                        System.out.printf("Could not render tile %d,%d,%d: %s\n", z, xcol, yrow, e);
                        return;
                    }
                }
            }
            System.out.printf("Done zoom %d\n", z);
        }

        System.out.println("done");
        renderer.destroy();
    }

    private static boolean isEmpty(BufferedImage img) {
        for (int x = 0; x < img.getWidth(); x++) {
            for (int y = 0; y < img.getHeight(); y++) {
                if (img.getRGB(x, y) != 0) {
                    return false;
                }
            }
        }
        return true;
    }
}
