#ifndef FUNCTIONS_HPP_INCLUDED
#define FUNCTIONS_HPP_INCLUDED
#include <cstdlib>

void drawMatrix(char matrix[3][3])
{
    std::system("cls");
    for(int i = 0; i < 3; i++)
    {
        std::cout << "                      ";
        for(int j = 0; j < 3; j++)
            std::cout << matrix[i][j] << "  ";
        std::cout << std::endl << std:: endl;
    }
}

void getInput(char matrix[3][3], char playersSymbol)
{
    int field;
    std::cout << "\nEnter the field where you want to place your X or O: ";
    std::cin >> field;
    switch(field)
    {
        case 1: matrix[0][0] = playersSymbol; break;
        case 2: matrix[0][1] = playersSymbol; break;
        case 3: matrix[0][2] = playersSymbol; break;
        case 4: matrix[1][0] = playersSymbol; break;
        case 5: matrix[1][1] = playersSymbol; break;
        case 6: matrix[1][2] = playersSymbol; break;
        case 7: matrix[2][0] = playersSymbol; break;
        case 8: matrix[2][1] = playersSymbol; break;
        case 9: matrix[2][2] = playersSymbol; break;
    }
}

void swapPlayers(char& playersSymbol)
{
    if(playersSymbol == 'X')
        playersSymbol = 'O';
    else playersSymbol = 'X';
}

char chooseWinner(char matrix[3][3])
{
    // first player - the one with 'X'
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';

    //second player - the one with 'O'
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';

    return '=';
}


#endif // FUNCTIONS_HPP_INCLUDED
