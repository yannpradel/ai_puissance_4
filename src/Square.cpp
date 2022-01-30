#include "../include/Square.h"
#include <stdio.h>
#include <iostream>
#include "../Functions.h"

Square::Square(int x, int y)
{
    m_x=x;
    m_y=y;
}

Square::~Square()
{
    //dtor
}


void Square::display()
{
    gotoligcol((m_x*2),(m_y*4));
    std::cout << "|___|" ;
  //  std::cout << "X : " << m_x << "Y : " << m_y << std::endl;
}

