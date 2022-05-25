#include "pastille.h"
#include <iostream>
Pastille::Pastille(int x, int y, Background* background): DrawableElem(x, y, background)
{
    set_background_image("pastille.png");
}

void Pastille::collision(NotifierCollision *notifieur)
{
    std::cout << "il y a une collison avec une pastille" << std::endl;
    notifieur->removeObserver(this);
    this->hide();
}
