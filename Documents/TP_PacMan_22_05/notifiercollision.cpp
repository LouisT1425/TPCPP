#include "notifiercollision.h"
#include <algorithm>
#include "observercollision.h"

NotifierCollision::NotifierCollision()
{

}


void NotifierCollision::addObserver(ObserverCollision* obs)
{
    _observateurs.push_back(obs);
}

void NotifierCollision::removeObserver(ObserverCollision* obs)
{
    _observateurs.erase(std::find(begin(_observateurs), end(_observateurs), obs));
}

void NotifierCollision::notify(int x, int y)
{
    for(int i = 0; i < _observateurs.size(); i++)
    {
        if(_observateurs[i]->test_collision(x, y)){
            _observateurs[i]->collision(this);
        }
    }
}
