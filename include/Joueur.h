#ifndef JOUEUR_H
#define JOUEUR_H
#include <stdio.h>
#include <iostream>


class Joueur
{
    public:
        Joueur();
        ~Joueur();

    private:
        std::string m_pseudo;
};

#endif // JOUEUR_H
