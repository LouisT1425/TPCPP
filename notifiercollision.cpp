#include <notifiercollision.h>
#include <algorithm>

NotifierCollision::NotifierCollision()
{

}


void NotifierCollision::addObserver(ObserverCollision* obs)
{
    Observateurs.push_back(obs);
}

void NotifierCollision::removeObserver(ObserverCollision* obs)
{
    Observateurs.erase(std::find(begin(Observateurs), end(Observateurs), obs));
}

void NotifierCollision::notify(int x, int y)
{
    for(int i = 0; i < Observateurs.size(); i++)
    {
        if(Observateurs[i]->test_collision(x, y)){
            Observateurs[i]->collision(this);
        }
    }
}
