#include "LifeNeighCounter.h"

// оличество живых соседей у клетки с координатами x, y
unsigned int life_neighbors_counter(cell world[][PLAYGROUND_HEIGTH], unsigned int x, unsigned int y)
{
    unsigned int count = 0;
    unsigned int i;
    int nb[8][2];
    int _x, _y;

    scan_neighbors(nb, x, y);

    for (i = 0; i < 8; i++) {
        _x = nb[i][0];
        _y = nb[i][1];

        if (x > 0 && y > 0 && x < PLAYGROUND_WIDTH && y < PLAYGROUND_HEIGTH && world[_x][_y].is_live == 1) {
            count++;
        }
    }

    return count;
}