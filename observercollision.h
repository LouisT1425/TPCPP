#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H
#include "notifiercollision.h"

class ObserverCollision
{
public:
    //declaration des fonctions en virutel pur afin de les redefinir dans d'autre classes
    virtual void collision(NotifierCollision *notifieur);
    virtual bool test_collision(int x, int y) = 0;
};

#endif // OBSERVERCOLLISION_H
