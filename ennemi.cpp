#include "ennemi.h"

void Ennemi::deplacer(int x, int y)
{
    pos_x = pos_x + x;
    pos_y = pos_y + y;
}

bool Ennemi::test_collision(int x, int y)
{
    bool dedans = 0;
    if(pos_x == x && pos_y == y)
    {
        dedans =1;
    }
    return dedans;
}
