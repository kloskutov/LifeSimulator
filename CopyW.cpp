#include "CopyW.h"

//Копирование игрового мира. Используется для сохранения предыдущего поколения
void copy_world(cell src[][PLAYGROUND_HEIGTH], cell dest[][PLAYGROUND_HEIGTH])
{
    unsigned int i, j;
    for (i = 0; i < PLAYGROUND_WIDTH; i++) {
        for (j = 0; j < PLAYGROUND_HEIGTH; j++) {
            dest[i][j] = src[i][j];
        }
    }
}
