#include <vector>
#ifndef NOTIFIERCOLLISION_H
#define NOTIFIERCOLLISION_H

class ObserverCollision;

class NotifierCollision
{
private :
    std::vector<ObserverCollision*> Observateurs;
public:
    NotifierCollision();

    void addObserver(ObserverCollision* obs);
    void removeObserver(ObserverCollision* obs);
    void notify(int x, int y);

};

#endif // NOTIFIERCOLLISION_H
