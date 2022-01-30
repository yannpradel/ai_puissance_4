#include "../include/Player.h"
#define repeat(x) for(int i = x; i--;)


Player::Player(int number)
{
    m_number=number;
}

Player::~Player()
{
    //dtor
}

void Player::playPawn(Board* boardGame)
{
    int col;
    std::cin >> col; //col is y

    int lig=6;
    repeat(6){
    for (auto i : boardGame->getBoard())
        {
            if(i.getPawn()!='_' && i.getX()==lig && i.getY()==col)
                {
                    lig--;
                }
        }
    }

    boardGame->setPawn(m_number,lig,col);
}




