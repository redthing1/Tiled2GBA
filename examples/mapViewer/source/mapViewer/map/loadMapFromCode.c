#include "map.h"
#include "../../asset/map.h"

Map loadMapFromCode() {
    Map map;

    map.sizeFlag = mapSizeFlag;

    map.paletteLength = mapPaletteLength;
    map.palette = &mapPalette[0];

    map.tileSetLength = mapTileSetLength;
    map.tileSet = &mapTileSet[0];

    map.numLayers = 1;
    map.tileMapLength = mapTileMap0Length;
    map.tileMapLayers[0] = &mapTileMap0[0];

    u16 objectDataindex = 0;
    u32 objectCount = 0;
    while (objectDataindex != mapObjectsLength) {
        Object object = loadObject(mapObjects, &objectDataindex);
        map.objects[objectCount] = object;
        objectCount++;
    }
    map.numObjects = objectCount;

    return map;
}
