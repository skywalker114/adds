#include "Computer.h"
#include <stdlib.h>
#include <time.h>

void Computer::makeMove()
{
    // char choices[4] = {'R','P','S'};
    // srand(time(NULL));
    // choice = choices[rand() % 3];
    choice = 'R';
}

char Computer::getMove()
{
    return choice;
}
