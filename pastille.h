#ifndef PASTILLE_H
#define PASTILLE_H
#include "drawableelem.h"
#include "observercollision.h"

class Pastille: public DrawableElem, public ObserverCollision
{
public:
    Pastille(int x, int y, Background* background);
    void affichiercol();
    void collision(NotifierCollision *notifieur);
};

#endif // PASTILLE_H
