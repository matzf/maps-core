package io.openmobilemaps.mapscore;

import java.io.File;

import javax.imageio.ImageIO;

import io.openmobilemaps.mapscore.map.util.MapTileRenderer;
import io.openmobilemaps.mapscore.map.util.OffscreenMapRenderer;
import io.openmobilemaps.mapscore.map.util.Tiled2dMapVectorLayerBuilder;
import io.openmobilemaps.mapscore.shared.map.coordinates.Coord;
import io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord;
import io.openmobilemaps.mapscore.shared.map.coordinates.CoordinateSystemIdentifiers;

public class MapsCoreTest {
  public static void main(String[] args) {
    MapsCore.initialize();

    OffscreenMapRenderer renderer = new OffscreenMapRenderer(256, 256);

    var layer = Tiled2dMapVectorLayerBuilder.createFromStyleJson("name", "http://localhost:8888/style.json", renderer.getMap().getCamera().getScreenDensityPpi());
    renderer.addLayerSync(layer.asLayerInterface());

    var bbox = new RectCoord(
        new Coord(CoordinateSystemIdentifiers.EPSG3857(),
                  637646.5258575683, 6077651.323061279, 0.0),
        new Coord(CoordinateSystemIdentifiers.EPSG3857(),
                  1187993.122897987, 5741328.40264769, 0.0));



    /*
    var cam = renderer.getMap().getCamera();
    cam.moveToCenterPositionZoom(new Coord(CoordinateSystemIdentifiers.EPSG4326(), 8.2, 46.8, 0.0), 0.5*2183915.09386,
        false);
    System.out.println(cam.getVisibleRect());
    try {
      var image = renderer.drawFrame();
      ImageIO.write(image, "png", new File("frame.png"));
    } catch (Exception e) {
      System.out.printf("Could not render image %s\n", e);
      return;
    }
    */


    System.out.println(bbox);

    MapTileRenderer tiler = new MapTileRenderer(renderer);
    for (int z = 0; z <= 10; ++z) {
      MapTileRenderer.TileRange tileRange = tiler.getTileRange(z, bbox);

      for (int xcol = tileRange.minColumn(); xcol <= tileRange.maxColumn(); ++xcol) {
        for (int yrow = tileRange.minRow(); yrow <= tileRange.maxRow(); ++yrow) {
          try {
          var img = tiler.renderTile(z, xcol, yrow);
          ImageIO.write(img, "png", new File(String.format("tiles/tile_%d_%d_%d.png", z, xcol, yrow)));
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
}