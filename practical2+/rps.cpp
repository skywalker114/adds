#include "Referee.h"
#include <iostream>
#include <array>

int main()
{
    Human player = Human();
    Computer cpu = Computer();
    Referee judge = Referee();
    std::array<std::string, 3> results = {"W", "L", "T"};
    // std::array<std::string, 3> results = {"You win", "Computer win", "Draw"};
    player.makeMove();
    cpu.makeMove();
    std::cout << judge.refGame(player, cpu) << std::endl;
    return 0;
}