#include "personnage.h"
#include <iostream>
#include <iostream>

Personnage::Personnage(int x, int y):Interactive(x, y, parent)
{
    init_animation_perso();
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

std::string Personnage::getDeplacementCourant()
{
    return deplacementCourant;
}

int Personnage::getPos_x()
{
    return pos_x;
}

int Personnage::getPos_y()
{
    return pos_y;
}

void Personnage::arrow_pressed(std::string cmd){
    if(cmd == "UP"){
        deplacementSetter("UP");
        new_pos();
    }

    if(cmd == "DOWN"){
        deplacementSetter("DOWN");
        new_pos();
    }

    if(cmd == "RIGHT"){
        deplacementSetter("RIGHT");
        new_pos();
    }

    if(cmd == "LEFT"){
        deplacementSetter("LEFT");
        new_pos();
    }
}

void Personnage::key_pressed(char key){
    std::cout << "Please use the keyboard arrows to move";
}

void Personnage::update_pos(){

}

Personnage::~Personnage(){

}
