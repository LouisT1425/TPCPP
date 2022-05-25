#include "ennemi.h"
//creation de la fonction deplacer
void Ennemi::deplacer(int x, int y)
{
    pos_x = pos_x + x;
    pos_y = pos_y + y;
    notify(x, y);
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

void Ennemi::update_pos()
{
    srand(time(NULL));
    int val = rand() % 10;
    if(val == 1 || val ==2)
    {
        deplacer(1, 0);
    }
    if(val == 3 || val ==4)
    {
        deplacer(-1, 0);
    }
    if(val == 5 || val ==6 || val ==7)
    {
        deplacer(0, 1);
    }
    if(val == 8 || val ==9 || val == 0)
    {
        deplacer(0, -1);
    }
}
Ennemi::Ennemi(int x, int y, Background *parent): RegularMove(x, y, parent)
{
    init_animation_ennemi("clyde");
}
