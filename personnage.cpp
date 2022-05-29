#include "personnage.h"
#include <iostream>
#include <iostream>

Personnage::Personnage(int x, int y, Background* parent):Interactive(x, y, parent)
{
    init_animation_perso();

}

bool Personnage::test_collision(int x, int y){
    return pos_x == x && pos_y==y;
}

void Personnage::collision(NotifierCollision *notifieur){
    std::cout << "Il y a une collision avec un personnage" << std::endl;
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
        pos_y++;
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
        pos_y--;
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

    }

    if(cmd == "DOWN"){
        deplacementSetter("DOWN");

    }

    if(cmd == "RIGHT"){
        deplacementSetter("RIGHT");

    }

    if(cmd == "LEFT"){
        deplacementSetter("LEFT");

    }
}



void Personnage::key_pressed(char key){
    std::cout << "Please use the keyboard arrows to move";
}

void Personnage::update_pos(){
    new_pos();
}

Personnage::~Personnage(){

}
