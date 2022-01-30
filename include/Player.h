#ifndef PLAYER_H
#define PLAYER_H
#include "Board.h"


class Player
{
    public:
        Player(int number);
        ~Player();

        void playPawn(Board*);

    private:
        int m_number;
};

#endif // PLAYER_H
