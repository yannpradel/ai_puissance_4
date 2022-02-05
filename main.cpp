#include <iostream>
#include "Board.h"
#include "Game.h"
#include "Player.h"
#include <windows.h>
#include "Functions.h"
#include <unistd.h>

int main()
{
    int endOfGame=0;
    Board GameBoard;
    GameBoard.createBoard();

    Game TheGame(&GameBoard);

    Player P1(1);
    Player P2(2);

    GameBoard.display();

    while(endOfGame!=1)
    {
        endOfGame=TheGame.isOver();
        GameBoard.display();
        P1.playPawn(&GameBoard);
        GameBoard.display();
        P2.playPawn(&GameBoard);
    }

}

void gotoligcol(int lig, int col )
{
    COORD mycoord;

    mycoord.X = col;
    mycoord.Y = lig;

    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}

