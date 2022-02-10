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

    while(1)
    {
        gotoligcol(0,15);
        std::cout << "c'est au joueur 1 de jouer !";
        GameBoard.display();
        P1.playPawn(&GameBoard);
        GameBoard.display();
        endOfGame=TheGame.isOver();

        if(endOfGame==1)
        {
            std::cout << "Le joueur 1 a gagne !";
            break;
        }

        gotoligcol(0,15);
        std::cout << "c'est au joueur 2 de jouer !";

        P2.playPawn(&GameBoard);
        GameBoard.display();
        endOfGame=TheGame.isOver();

        if(endOfGame==2)
        {
            std::cout << "Le joueur 2 a gagne !";
            break;
        }
    }

}

void gotoligcol(int lig, int col )
{
    COORD mycoord;

    mycoord.X = col;
    mycoord.Y = lig;

    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}

