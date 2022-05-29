#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include "observercollision.h"
#include "notifiercollision.h"
#include "interactive.h"

class Personnage : public ObserverCollision, public NotifierCollision, public Interactive
{
private :

    std::string deplacementCourant;

public:
    Personnage(int x, int y, Background *parent);
    bool new_pos();
    void deplacementSetter(std::string deplacement);

    std::string getDeplacementCourant();
    int getPos_x();
    int getPos_y();

    void key_pressed(char key);
    void arrow_pressed(std::string cmd);
    void update_pos();
    virtual bool test_collision(int x, int y);
    virtual void collision(NotifierCollision *notifieur);

    virtual ~Personnage();
};

#endif // PERSONNAGE_H
