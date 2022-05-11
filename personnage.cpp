#include "personnage.h"

Personnage::Personnage(int x, int y)
{
    pos_x = x;
    pos_y = y;
}

bool Personnage::new_pos()
{
    const int xmin = 0;
    const int xmax = 32;
    const int ymin = 0;
    const int ymax = 15;

    if (deplacementCourant == "RIGHT")
        {
        if(pos_x < xmax){
        pos_x=pos_x+1;
        return true;
        }
        else{
            return false;
            }
        }

    else if (deplacementCourant == "LEFT")
        {
        if(pos_x > xmin){
        pos_x--;
        return true;
        }
        else{
            return false;
            }
        }

    else if (deplacementCourant == "DOWN")
        {
        if(pos_y > ymin){
        pos_y;
        return true;
        }
        else{
            return false;
            }
        }

    else if (deplacementCourant == "UP")
        {
        if(pos_y < ymax){
        pos_y;
        return true;
        }
        else{
            return false;
            }
        }
    else if (deplacementCourant == "IDLE")
        {
        return true;
        }
    else
            return false;
    }


void Personnage::deplacementSetter(std::string deplacement)

{
    deplacementCourant = deplacement;
}
