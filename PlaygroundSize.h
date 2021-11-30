#pragma once

//Ширина игрового поля 
#define PLAYGROUND_HEIGTH 20

//Высота игрового поля 
#define PLAYGROUND_WIDTH 20

struct cell {
    unsigned is_live : 1;
};

