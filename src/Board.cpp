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
    for(int i=1; i<8; i++)
    {
        for(int j=1; j<7; j++)
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

    for (int i=0; i<m_squares.size(); i++)
    {
        if(m_squares[i].getX()==col && m_squares[i].getY()==lig)
        {
            m_squares[i].setSquare(col,lig,displayPlayer);
        }
    }
}

int Board::isOver()
{
    std::cout << std::endl;
    std::vector<Square> tempSquares;
    ///vertical condition
    for (int col=1;col<8;col++)
    {
        tempSquares.clear();
        for (int k=0; k<m_squares.size(); k++)
        {
            if(m_squares[k].getY()==col)
            {
                tempSquares.push_back(m_squares[k]);
            }
        }

   //    for (int i=0; i<tempSquares.size(); i++)
   //    std::cout << "voici les signes des cases (ligne, col) : " << i << col << " : " << tempSquares[i].getPawn() << std::endl;

        for(int i=5; i>2; i--)
        {
            if(tempSquares[i].getPawn() == 'X' && tempSquares[i-1].getPawn() == 'X' &&
                    tempSquares[i-2].getPawn() == 'X' && tempSquares[i-3].getPawn() == 'X')
                return 1;

            if(tempSquares[i].getPawn() == 'O' && tempSquares[i-1].getPawn() == 'O' &&
                    tempSquares[i-2].getPawn() == 'O' && tempSquares[i-3].getPawn() == 'O')
                return 2;
        }
    }


    ///horizontal condition

    for (int lig=1;lig<7;lig++)
    {
        tempSquares.clear();
        for (int k=0; k<m_squares.size(); k++)
        {
            if(m_squares[k].getX()==lig)
            {
                tempSquares.push_back(m_squares[k]);
            }
        }

   //    for (int i=0; i<tempSquares.size(); i++)
   //    std::cout << "voici les signes des cases (ligne, col) : " << i << col << " : " << tempSquares[i].getPawn() << std::endl;

        for(int i=6; i>2; i--)
        {
            if(tempSquares[i].getPawn() == 'X' && tempSquares[i-1].getPawn() == 'X' &&
                    tempSquares[i-2].getPawn() == 'X' && tempSquares[i-3].getPawn() == 'X')
                return 1;

            if(tempSquares[i].getPawn() == 'O' && tempSquares[i-1].getPawn() == 'O' &&
                    tempSquares[i-2].getPawn() == 'O' && tempSquares[i-3].getPawn() == 'O')
                return 2;
        }
    }

    return 0;

    ///diagonal condition
}
