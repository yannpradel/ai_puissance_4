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
        ~Board();

    private:
        std::vector<Square> m_squares;
};

#endif // BOARD_H
