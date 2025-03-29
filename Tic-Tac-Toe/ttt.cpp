#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main()
{
    std::vector<std::string> players(2);
    bool game = true;
    std::vector<char> symbols = {'X', 'O'};
    int x, y;
    std::string arrays[3][3]; 

    greet();

    for (int i = 0; i < sizeof(arrays); i++) {
        for (int j = 0; j < sizeof(arrays); i++) {
            arrays[i][j] = "";
        }
    }

    std::cout << "Name of player 1: ";
    std::cin >> players[0];

    std::cout << "Name of player 2: ";
    std::cin >> players[1];

    while (game)
    {
        std::cout << players[0] << " at which X and Y coordinates do you want to place your symbol?\n";
        // while und Statement einbauen falls außerhalb des 3 x 3 Matrix
        std::cout << "X: ";
        std::cin >> x;

        std::cout << "Y: ";
        std::cin >> y;

        for (int i = 0; i < sizeof(arrays); i++) {
            for (int j = 0; j < sizeof(arrays); j++) {
                if (i == x) {
                    //arrays[i] = 
                }
            }
        }

    }
    


}