#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H
#include "notifiercollision.h"

class ObserverCollision
{
public:
    virtual void collision(NotifierCollision notifieur);
    virtual bool test_collision(int x, int y);
};

#endif // OBSERVERCOLLISION_H
