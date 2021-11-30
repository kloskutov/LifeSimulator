#include <fstream>
#include <windows.h>
#include "PlaygroundSize.h"
#include "CreateW.h"
#include "PrintW.h"
#include "LifeCounter.h"
#include "CopyW.h"
#include "CompareW.h"
#include "ScanNeigh.h"
#include "LifeNeighCounter.h"
#include "NextGen.h"

//#include <iomanip>

using namespace std;

int main()
{
    cell world[PLAYGROUND_WIDTH][PLAYGROUND_HEIGTH];
    cell prev_world[PLAYGROUND_WIDTH][PLAYGROUND_HEIGTH];

    create_world(world);
    unsigned int alive_cells = -1;
    bool is_optimal = false;

    //ofstream out_stream;
    //out_stream.open("\\File\\Path", ios::app);

    //int counter = 1;
    do {
        print_world(world);
        copy_world(world, prev_world);
        next_gen(world, prev_world);

        is_optimal = cmp_world(world, prev_world) == 0;
        alive_cells = life_counter(world);

        //out_stream << counter << '\t' << alive_cells << endl;

        if (is_optimal) {
            cout << "Optimal configuration detected" << endl;
        }

        if (alive_cells == 0) {
            cout << "All cells died" << endl;
        }
        //counter++;
        Sleep(1000);
    } while (alive_cells != 0 && !is_optimal);

    //out_stream.close();

    return 0;
}





