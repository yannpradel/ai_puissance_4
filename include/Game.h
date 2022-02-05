#ifndef GAME_H
#define GAME_H
#include "Board.h"

class Player;
class Game
{
    public:
        Game();
        Game(Board* _board);
        ~Game();

        int isOver();

    private:
        Board* m_board;
        std::vector<Player*> m_players;
};

#endif // GAME_H
