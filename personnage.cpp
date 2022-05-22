#include "personnage.h"
#include <iostream>
#include <iostream>

Personnage::Personnage(int x, int y)
{
    pos_x = x;
    pos_y = y;
}

bool Personnage::test_collision(int x, int y){
    return pos_x == x && pos_y==y;
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
        pos_x++;
        this->notify(pos_x, pos_y);
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
        this->notify(pos_x, pos_y);
        return true;
        }
        else{
            return false;
            }
        }

    else if (deplacementCourant == "DOWN")
        {
        if(pos_y > ymin){
        pos_y--;
        this->notify(pos_x, pos_y);
        return true;
        }
        else{
            return false;
            }
        }

    else if (deplacementCourant == "UP")
        {
        if(pos_y < ymax){
        pos_y++;
        this->notify(pos_x, pos_y);
        return true;
        }
        else{
            return false;
            }
        }
    else if (deplacementCourant == "IDLE")
        {
        this->notify(pos_x, pos_y);
        return true;
        }
    else{
            std::cout << "Invalid command" << std::endl;
            return false;
        }
    }


void Personnage::deplacementSetter(std::string deplacement)

{
    deplacementCourant = deplacement;
}

int Personnage::getPos_x()
{
    return pos_x;
}

int Personnage::getPos_y()
{
    return pos_y;
}

Personnage::~Personnage(){

}
