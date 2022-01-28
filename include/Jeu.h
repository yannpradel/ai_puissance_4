#ifndef JEU_H
#define JEU_H
#include <vector>;
#include <PlateauJeu.h>

class Joueur;

class Jeu
{
    public:
        Jeu();
        ~Jeu();

    private:
        std::vector<Joueur*> m_joueurs;
        PlateauJeu m_plateau;

};

#endif // JEU_H
