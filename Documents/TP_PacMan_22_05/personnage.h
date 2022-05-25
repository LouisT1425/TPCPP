#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include "observercollision.h"
#include "notifiercollision.h"


class Personnage : public ObserverCollision, public NotifierCollision
{
private :

    int pos_x = 1;
    int pos_y = 1;
    std::string deplacementCourant;

public:
    Personnage(int x, int y);
    bool new_pos();
    void deplacementSetter(std::string deplacement);
    int getPos_x();
    int getPos_y();

    virtual bool test_collision(int x, int y);

    virtual ~Personnage();
};

#endif // PERSONNAGE_H
