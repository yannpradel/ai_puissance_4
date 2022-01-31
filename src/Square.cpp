#include "../include/Square.h"
#include <stdio.h>
#include <iostream>
#include "../Functions.h"

Square::Square()
{

}

Square::Square(int x, int y)
{
    m_x=x;
    m_y=y;
}

Square::~Square()
{
    //dtor
}

void Square::setSquare(int x, int y)
{
    m_x=x;
    m_y=y;
}

void Square::setSquare(int x, int y,char player)
{
    m_x=x;
    m_y=y;
    m_pawn=player;
}

void Square::display(char c)
{
    gotoligcol((m_x*2),(m_y*7));
    std::cout << "|_"<< c <<"_|" ;
  //  std::cout << "X : " << m_x << "Y : " << m_y << std::endl;
}



