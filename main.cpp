#include <iostream>
#include "../include/Board.h"
#include <windows.h>
#include "Functions.h"

int main()
{
    Board GameBoard;
    GameBoard.createBoard();
    GameBoard.display();
}

void gotoligcol(int lig, int col )
{
    COORD mycoord;

    mycoord.X = col;
    mycoord.Y = lig;

    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}

