#include "CompareW.h"

//Сравнение игровых миров текущего и предыдущего поколения
int cmp_world(cell w1[][PLAYGROUND_HEIGTH], cell w2[][PLAYGROUND_HEIGTH])
{
    unsigned int i, j;
    for (i = 0; i < PLAYGROUND_WIDTH; i++) {
        for (j = 0; j < PLAYGROUND_WIDTH; j++) {
            if (w1[i][j].is_live != w2[i][j].is_live) {
                return -1;
            }
        }
    }
    return 0;
}