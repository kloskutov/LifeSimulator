#include "LifeCounter.h"

// оличество живых клеток на игровом поле
unsigned int life_counter(cell world[][PLAYGROUND_HEIGTH])
{
    unsigned int count = 0;
    unsigned i, j;
    for (i = 0; i < PLAYGROUND_WIDTH; i++) {
        for (j = 0; j < PLAYGROUND_HEIGTH; j++) {
            if (world[i][j].is_live == 1) {
                count++;
            }
        }
    }
    return count;
}
