#ifndef PASTILLE_H
#define PASTILLE_H

#include "drawableelem.h"
#include "observercollision.h"


class Pastille : public DrawableElem, public ObserverCollision
{
public:
    Pastille(int x, int y, Background* background);
    bool test_collision(int x, int y);
    virtual void collision(NotifierCollision *notifieur);

    virtual ~Pastille();
};

#endif // PASTILLE_H
