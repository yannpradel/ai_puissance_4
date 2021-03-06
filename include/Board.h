#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <Square.h>


class Board
{
    public:
        Board();
        Board(std::vector<Square> squares);
        ~Board();

        void createBoard();
        void display();
        void setPawn(int number,int col,int lig);

        std::vector<Square> getBoard(){return m_squares;}

    private:
        std::vector<Square> m_squares;
};

#endif // BOARD_H
