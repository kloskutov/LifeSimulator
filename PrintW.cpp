#include "PrintW.h"

//Вывести на экран игровое поле
void print_world(cell world[][PLAYGROUND_HEIGTH])
{
    unsigned int i, j;
    for (i = 0; i < PLAYGROUND_HEIGTH; i++) {
        for (j = 0; j < PLAYGROUND_WIDTH; j++) {
            if (world[i][j].is_live == 1) {
                std::cout << '*';
            }
            else {
                std::cout << ' ';
            }
            std::cout << ' ';
        }
        std::cout << std::endl;
    }
    std::string s;
    s.resize(PLAYGROUND_WIDTH*2-1);
    std::fill(s.begin(), s.end(), '_');
    
    std::cout << s <<std::endl;
}