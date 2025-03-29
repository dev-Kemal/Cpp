#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main()
{
    std::vector<std::string> players(2);
    bool game = true;
    std::vector<char> symbols = {'X', 'O'};
    int x, y;
    std::string arrays[3][3] = { {"", "", ""}, {"", "", ""}, {"", "", ""} };

    greet();

    std::cout << "Name of player 1: ";
    std::cin >> players[0];

    std::cout << "Name of player 2: ";
    std::cin >> players[1];

    int currentPlayer = 0;

    while (game)
    {
        std::cout << players[currentPlayer] << " at which X and Y coordinates do you want to place your symbol?\n";
        do
        {
            std::cout << "X (0-2): ";
            std::cin >> x;
        } while (x < 0 || x > 2);

        do
        {
            std::cout << "Y (0-2): ";
            std::cin >> y;
        } while (y < 0 || y > 2);

        for (int i = 0; i < sizeof(arrays); i++)
        {
            for (int j = 0; j < sizeof(arrays); j++)
            {
                if (i == x && j == y)
                {
                    arrays[i][j] = symbols[0];
                    break;
                }
            }
        }

        // Bedingung einbauen, dass wenn ein Feld belegt ist, man es nochmal machen muss

        // Switch between player 1 and 2
        currentPlayer = 1 - currentPlayer;
        // Prüfen ob jemand gewonnen hat game = false
    }
}