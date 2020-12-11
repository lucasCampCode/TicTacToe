// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


char grid[3][3] = { {'0','0','0'},{'0','0','0'},{'0','0','0'} };
void printGrid() {

    for (int i = 0; i < 3; i++) {
        for (int y = 0; y < 3; y++) {
            if (y == 0)
                std::cout << "         " << grid[i][y];
            else
                std::cout << "    |    " << grid[i][y];
        }
        if (i != 2)
            std::cout << std::endl << "       ---------------------------" << "\n";
        else
            std::cout << std::endl;
    }
}
char checkWinner() {

    if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X' || grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X' || grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X' ||
        grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X' || grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X' || grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X' ||
        grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X' || grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X') {
        return 'X';
    }
    else if (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O' || grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O' || grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O' ||
        grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O' || grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O' || grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O' ||
        grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O' || grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O') {
        return 'O';
    }
    else if (grid[0][0] != '0' && grid[0][1] != '0' && grid[0][2] != '0' && grid[1][0] != '0' && grid[1][1] != '0' && grid[1][2] != '0' && grid[2][0] != '0' && grid[2][1] != '0' && grid[2][2] != '0') {
        return 's';
    }
    return ' ';
}


int main()
{
    bool player1turn = true;
    char player1Name[15];
    char player2Name[15];
    char winner = ' ';
    int input = 0;

    bool gameover = false;
    std::cout << "player 1 what is your name: ";
    std::cin >> player1Name;
    std::cout << "player 2 what is your name: ";
    std::cin >> player2Name;
    while (!gameover) {

        printGrid();

        winner = checkWinner();

        if (winner == 'X') {
            std::cout << player1Name << " wins!\n";
            gameover = true;
            break;
        }
        else if (winner == 'O') {
            std::cout << player2Name << " wins!\n";
            gameover = true;
            break;
        }
        else if (winner == 's') {
            std::cout << "scratch!\n";
            gameover = true;
            break;
        }
        if (player1turn)
            std::cout << player1Name << " it is your turn!\n";
        else
            std::cout << player2Name << " it is your turn!\n";

        do {
            std::cin >> input;
        } while (input < 0 && input > 10);

        if (player1turn) {
            if (input == 7 && grid[0][0] == '0') {
                grid[0][0] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 8 && grid[0][1] == '0') {
                grid[0][1] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 9 && grid[0][2] == '0') {
                grid[0][2] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 4 && grid[1][0] == '0') {
                grid[1][0] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 5 && grid[1][1] == '0') {
                grid[1][1] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 6 && grid[1][2] == '0') {
                grid[1][2] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 1 && grid[2][0] == '0') {
                grid[2][0] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 2 && grid[2][1] == '0') {
                grid[2][1] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 3 && grid[2][2] == '0') {
                grid[2][2] = 'X';
                player1turn = !player1turn;
            }
        }
        else {
            if (input == 7 && grid[0][0] == '0') {
                grid[0][0] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 8 && grid[0][1] == '0') {
                grid[0][1] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 9 && grid[0][2] == '0') {
                grid[0][2] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 4 && grid[1][0] == '0') {
                grid[1][0] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 5 && grid[1][1] == '0') {
                grid[1][1] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 6 && grid[1][2] == '0') {
                grid[1][2] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 1 && grid[2][0] == '0') {
                grid[2][0] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 2 && grid[2][1] == '0') {
                grid[2][1] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 3 && grid[2][2] == '0') {
                grid[2][2] = 'O';
                player1turn = !player1turn;
            }
        }
        system("cls");
    }

    system("pause");

    return 0;
}