#include "observercollision.h"
#include "notifiercollision.h"
#include <iostream>

void ObserverCollision::collision(NotifierCollision* notifieur)
{
    std::cout << "il y a une collision" << std::endl;
}
