#include "ennemi.h"

Ennemi::Ennemi(){

}

void Ennemi::new_pos(){

}

//creation de la fonction deplacer
void Ennemi::deplacer(int x, int y)
{
    pos_x = pos_x + x;
    pos_y = pos_y + y;
    notify(pos_x, pos_y);
}
//creation de la fonction test_collision qui regarde si la position du phantome est a la meme position qu'un personnage
bool Ennemi::test_collision(int x, int y)
{
    bool dedans = 0;
    if(pos_x == x && pos_y == y)
    {
        dedans =1;
    }
    return dedans;
}

Ennemi::~Ennemi(){

}
