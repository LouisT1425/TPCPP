#ifndef ENNEMI_H
#define ENNEMI_H
#include "observercollision.h"

class Ennemi :public ObserverCollision
{
public:
    Ennemi();
    virtual void new_pos();
    void deplacer(int x, int y);
    bool test_collision(int x, int y);
private:
    int pos_x, pos_y;

};

#endif // ENNEMI_H
