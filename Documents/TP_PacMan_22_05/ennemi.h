#ifndef ENNEMI_H
#define ENNEMI_H
#include "observercollision.h"
#include "notifiercollision.h"

class Ennemi :public ObserverCollision, public NotifierCollision
{
public:
    Ennemi(int x, int y);
    virtual void new_pos();
    void deplacer(int x, int y);
    bool test_collision(int x, int y);

    virtual ~Ennemi();
private:
    int pos_x, pos_y;

};

#endif // ENNEMI_H
