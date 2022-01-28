#ifndef PLATEAUJEU_H
#define PLATEAUJEU_H
#include <vector>
#include <Case.h>



class PlateauJeu
{
    public:
        PlateauJeu();
        ~PlateauJeu();

    private:
        std::vector<Case> m_cases;
};

#endif // PLATEAUJEU_H
