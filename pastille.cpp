#include "pastille.h"
#include "notifiercollision.h"
#include <iostream>

Pastille::Pastille(int x, int y, Background* background): DrawableElem(x, y, background), ObserverCollision()
{
    set_background_image("pastille.png");
}

bool Pastille::test_collision(int x, int y){
    return pos_x == x && pos_y == y;
    }

void Pastille::collision(NotifierCollision *notifieur){
    std::cout << "Il y a une collision avec une pastille" << std::endl;
    notifieur->removeObserver(this);
    delete this;
}

Pastille::~Pastille(){

}
