#include <iostream>
#include <vector>

// Function prototype for displaying a welcome message
void greet();

// Function prototype for handling the gameplay loop
void gameplay(std::vector<std::string> players, std::vector<char> symbols);

// Function prototype for checking if a player has won the game
bool checkWin(char board[3][3], char symbol, std::vector<std::string> players, int currentPlayer);