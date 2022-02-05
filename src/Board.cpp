#include "../include/Board.h"
#include "../include/Square.h"

Board::Board()
{

}

Board::Board(std::vector<Square> squares)
{
    m_squares=squares;

}

Board::~Board()
{
    //dtor
}


void Board::createBoard()
{
    for(int i=1;i<8;i++)
    {
        for(int j=1;j<7;j++)
        {
            Square oneSquare(j,i);
            m_squares.push_back(oneSquare);
        }
    }
}

void Board::display()
{
    for (auto i : m_squares)
    {
        i.display(i.getPawn());
    }
}

void Board::setPawn(int number,int col,int lig)
{
    char displayPlayer;
    if (number==1)
    {
        displayPlayer='X';
    }

    if (number==2)
    {
        displayPlayer='O';
    }

    for (int i=0;i<m_squares.size();i++)
    {
        if(m_squares[i].getX()==col && m_squares[i].getY()==lig)
        {
            m_squares[i].setSquare(col,lig,displayPlayer);
        }
    }
}

int Board::isOver()
{
  // repeat(7);
    std::vector<Square> tempSquares;
    ///vertical condition
    for (int k=0;k<m_squares.size();k++)
    {
        if(m_squares[k].getY()==1)
        {
            tempSquares.push_back(m_squares[k]);
        }
    }

    for(int j=1;j<7;j++)
        {

        }


    return 0;

    ///horizontal condition

    ///diagonal condition
}
