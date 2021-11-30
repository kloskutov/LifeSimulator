#include "NextGen.h"

//Сгенерировать следующее поколение игрового мира
void next_gen(cell world[][PLAYGROUND_HEIGTH], cell prev_world[][PLAYGROUND_HEIGTH])
{
    unsigned int i, j;
    unsigned int live_nb;
    cell p;

    for (i = 0; i < PLAYGROUND_WIDTH; i++) {
        for (j = 0; j < PLAYGROUND_HEIGTH; j++) {
            p = prev_world[i][j];
            live_nb = life_neighbors_counter(prev_world, i, j);

            if (p.is_live == 0) {
                if (live_nb == 3) {
                    world[i][j].is_live = 1;
                }
            }
            else {
                if (live_nb < 2 || live_nb > 3) {
                    world[i][j].is_live = 0;
                }
            }
        }
    }
}
