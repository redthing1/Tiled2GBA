#include "mapViewer.h"

void shiftMap(Map map, BGPoint offset)
{
    for (u16 layer = 0; layer < map.numLayers; layer++)
        shiftMapLayer(layer, offset);
}
