#ifndef ENNEMI_H
#define ENNEMI_H
#include "observercollision.h"
#include "notifiercollision.h"
#include "regularmove.h"

class Ennemi :public ObserverCollision, public NotifierCollision, public RegularMove
{
public:
    Ennemi(int x, int y, Background *parent);

    virtual void new_pos(); // Au départ cette fonction permettait de faire bouger l'ennemi de la même façon que dans la classe
                            // Personnage, mais nous l'avons remplacée par la fonction deplacer().

    void deplacer(int x, int y); // Rajoute x et y aux coordonnées de

    virtual void collision(NotifierCollision *notifieur);
    bool test_collision(int x, int y);
    void update_pos();

    virtual ~Ennemi();
private:
    int pos_x, pos_y;

};

#endif // ENNEMI_H
