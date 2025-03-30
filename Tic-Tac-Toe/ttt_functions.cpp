#include <iostream>
#include <vector>

// Function to display a welcome message
void greet()
{
    std::cout << "Welcome to Tic-Tac-Toe!\n";
}

// Function prototype for gameplay (currently empty, to be implemented later)
void gameplay(std::vector<std::string> players, std::vector<char> symbols)
{
}

// 3x3 board initialized with empty spaces
char arrays[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

// Player symbols (X and O)
std::vector<char> symbols = {'X', 'O'};

// Function to check if a player has won
bool checkWin(char board[3][3], char symbol, std::vector<std::string> players, int currentPlayer)
{
    // Check rows for a win
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
        {
            std::cout << "\n3 in a row! Player " << players[currentPlayer] << " wins!\n";
            return true;
        }
    }

    // Check columns for a win
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
        {
            std::cout << "\n3 in a column! Player " << players[currentPlayer] << " wins!\n";
            return true;
        }
    }

    // Check diagonals for a win
    if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
        (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol))
    {
        std::cout << "\n3 in a diagonal! Player " << players[currentPlayer] << " wins!\n";
        return true;
    }

    // No win condition met
    return false;
}
