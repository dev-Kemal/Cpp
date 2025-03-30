#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main()
{
    // Stores player names
    std::vector<std::string> players(2);

    // Controls the game loop
    bool game = true;

    // Defines symbols for Player 1 ('X') and Player 2 ('O')
    std::vector<char> symbols = {'X', 'O'};

    // Variables to store user input coordinates
    int x, y;

    // 3x3 game board initialized with empty spaces
    char arrays[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    // Display welcome message
    greet();

    // Get player names
    std::cout << "Name of player 1: ";
    std::cin >> players[0];

    std::cout << "Name of player 2: ";
    std::cin >> players[1];

    // Player 1 starts first
    int currentPlayer = 0;

    while (game)
    {
        // Prompt the current player for their move
        std::cout << players[currentPlayer] << " at which X and Y coordinates do you want to place your symbol?\n";

        do
        {
            std::cout << "X (0-2): ";
            std::cin >> x;

            std::cout << "Y (0-2): ";
            std::cin >> y;

            std::cout << "\n";

        } while (x < 0 || x > 2 || y < 0 || y > 2 || arrays[x][y] != ' '); 
        // Ensures input is within bounds and the chosen cell is empty

        // Place the player's symbol on the board
        arrays[x][y] = symbols[currentPlayer]; 

        // Print the updated game board
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << arrays[i][j] << " ";
            }
            std::cout << "\n";
        }

        // Check if the current player has won
        if (checkWin(arrays, symbols[currentPlayer], players, currentPlayer))
        {
            game = false; // End the game if someone wins
            break;
        }

        // Switch between Player 1 and Player 2
        currentPlayer = 1 - currentPlayer;
    }
}
