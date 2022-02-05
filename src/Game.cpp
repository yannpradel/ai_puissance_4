#include "../include/Game.h"


Game::Game()
{
    //ctor
}

Game::Game(Board* _board)
{
    m_board=_board;
}

Game::~Game()
{
    //dtor
}

int Game::isOver()
{
    return m_board->isOver();
}
