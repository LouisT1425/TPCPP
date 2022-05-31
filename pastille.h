#ifndef PASTILLE_H
#define PASTILLE_H

#include "drawableelem.h"
#include "observercollision.h"


class Pastille : public DrawableElem, public ObserverCollision
{
public:
    Pastille(int x, int y, Background* background);
    bool test_collision(int x, int y); // Retourne 1 si la position du personnage est égale aux paramètre, 0 sinon.
    virtual void collision(NotifierCollision *notifieur); // Envoie un message dans la console si il y a une collision, puis supprime la pastille des observateurs,
                                                          // et enfin cache la pastille au joueur.

    virtual ~Pastille();
};

#endif // PASTILLE_H
