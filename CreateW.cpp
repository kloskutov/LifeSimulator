#include "CreateW.h"

//Инициализация первого поколения игры случайными значениями
void create_world(cell world[][PLAYGROUND_HEIGTH])
{
    
    srand(time(NULL));
    unsigned int i, j;

    for (i = 0; i < PLAYGROUND_HEIGTH; i++) {
        for (j = 0; j < PLAYGROUND_WIDTH; j++) {
            unsigned int num = 1 + rand() % 10;
            if (num % 2 == 0) {
                world[i][j].is_live = 1;
            }
            else {
                world[i][j].is_live = 0;
            }
        }
    }
}
