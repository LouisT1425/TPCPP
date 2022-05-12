#include <string>
#include <iostream>
#include <notifiercollision.h>
#ifndef PERSONNAGE_H
#define PERSONNAGE_H


class Personnage : public NotifierCollision
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
};

#endif // PERSONNAGE_H
