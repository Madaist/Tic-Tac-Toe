#include <iostream>
#include <algorithm>
#include "Functions.hpp"


int main()
{
    char matrix[3][3] = { '1', '2', '3',
                          '4', '5', '6',
                          '7', '8', '9'
                        };
    bool draw = true, game = true;
    char playersSymbol = 'X';

    while(game)
    {
        for(int i = 0; i < 9; i++)
        {
            drawMatrix(matrix);
            getInput(matrix, playersSymbol);
            if(chooseWinner(matrix) == 'X')
            {
                std::cout << "X WINS!\n";
                draw = false;
                break;
            }
            if(chooseWinner(matrix) == 'O')
            {
                std::cout << "Y WINS!\n";
                draw = false;
                break;
            }
            swapPlayers(playersSymbol);
        }
        if(draw)
            std::cout << "\nWe have no winners this time. :(.\n";
        std::cout << "\nDo you want to play another round?\n";
        std::string choice;
        std::cin >> choice;
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        if(!(choice == "yes" || choice == "y"))
            game = false;
    }

    return 0;
}
