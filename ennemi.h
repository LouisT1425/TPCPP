#ifndef ENNEMI_H
#define ENNEMI_H
#include "observercollision.h"
#include "notifiercollision.h"
#include "regularmove.h"

class Ennemi :public ObserverCollision, public NotifierCollision, public RegularMove
{
private:
    int pos_x, pos_y;
    void init_animation_ennemi(std::string clyde);
public:
    Ennemi(int x, int y, Background *parent);
    virtual void new_pos();
    void deplacer(int x, int y);
    bool test_collision(int x, int y);
    void update_pos();


};

#endif // ENNEMI_H
