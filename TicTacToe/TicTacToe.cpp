// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void printGrid(char arr[]) {

    for (int i = 0; i < 3; i++) {
        for (int y = 0; y < 3; y++) {
            std::cout << "    |    " << arr[(i * 3) + y];
        }
        std::cout << std::endl << "       ---------------------------"<< "\n";
    }
}
char checkWinner(char grid[]) {

    if (grid[0] == 'X' && grid[1] == 'X' && grid[2] == 'X' || grid[3] == 'X' && grid[4] == 'X' && grid[5] == 'X' || grid[6] == 'X' && grid[7] == 'X' && grid[8] == 'X' ||
        grid[0] == 'X' && grid[3] == 'X' && grid[6] == 'X' || grid[1] == 'X' && grid[4] == 'X' && grid[7] == 'X' || grid[2] == 'X' && grid[5] == 'X' && grid[8] == 'X' ||
        grid[0] == 'X' && grid[4] == 'X' && grid[8] == 'X' || grid[2] == 'X' && grid[4] == 'X' && grid[6] == 'X') {
        return 'X';
    }
    else if (grid[0] == 'O' && grid[1] == 'O' && grid[2] == 'O' || grid[3] == 'O' && grid[4] == 'O' && grid[5] == 'O' || grid[6] == 'O' && grid[7] == 'O' && grid[8] == 'O' ||
        grid[0] == 'O' && grid[3] == 'O' && grid[6] == 'O' || grid[1] == 'O' && grid[4] == 'O' && grid[7] == 'O' || grid[2] == 'O' && grid[5] == 'O' && grid[8] == 'O' ||
        grid[0] == 'O' && grid[4] == 'O' && grid[8] == 'O' || grid[2] == 'O' && grid[4] == 'O' && grid[6] == 'O') {
        return 'O';
    }
    else if (grid[0] != '0' && grid[1] != '0' && grid[2] != '0' && grid[3] != '0' && grid[4] != '0' && grid[5] != '0' && grid[6] != '0' && grid[7] != '0' && grid[8] != '0') {
        return 'q';
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
    char grid[9] = {'0','0','0','0','0','0','0','0','0'};

    bool gameover = false;
    std::cout << "player 1 what is your name: ";
    std::cin >> player1Name;
    std::cout << "player 2 what is your name: ";
    std::cin >> player2Name;
    while (!gameover) {
        printGrid(grid);
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
        else if (winner == 'q') {
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
            if (input == 7 && grid[0] == '0') {
                grid[0] = 'X'; 
                player1turn = !player1turn;
            }
            else if (input == 8 && grid[1] == '0') {
                grid[1] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 9 && grid[2] == '0') {
                grid[2] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 4 && grid[3] == '0') {
                grid[3] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 5 && grid[4] == '0') {
                grid[4] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 6 && grid[5] == '0') {
                grid[5] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 1 && grid[6] == '0') {
                grid[6] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 2 && grid[7] == '0') {
                grid[7] = 'X';
                player1turn = !player1turn;
            }
            else if (input == 3 && grid[8] == '0') {
                grid[8] = 'X';
                player1turn = !player1turn;
            }
        }
        else {
            if (input == 7 && grid[0] == '0') {
                grid[0] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 8 && grid[1] == '0') {
                grid[1] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 9 && grid[2] == '0') {
                grid[2] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 4 && grid[3] == '0') {
                grid[3] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 5 && grid[4] == '0') {
                grid[4] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 6 && grid[5] == '0') {
                grid[5] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 1 && grid[6] == '0') {
                grid[6] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 2 && grid[7] == '0') {
                grid[7] = 'O';
                player1turn = !player1turn;
            }
            else if (input == 3 && grid[8] == '0') {
                grid[8] = 'O';
                player1turn = !player1turn;
            }
        }
        winner = checkWinner(grid);

        system("cls");
    }

    system("pause");

    return 0;
}