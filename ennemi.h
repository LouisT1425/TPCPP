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
                            // Personnage, mais cela ne marchait pas si on mettait la fonctionnalité dedans. Nous avons donc
                            // copié-collé le contenu de new_pos() dans update_pos(), qui elle appelait new_pos() auparavant.

    void deplacer(int x, int y); // Rajoute x et y aux coordonnées de l'ennemi

    virtual void collision(NotifierCollision *notifieur); // Envoie un message dans la console si il y a une collision.

    bool test_collision(int x, int y); // Retourne 1 si la position de l'ennemi est égale aux paramètre, 0 sinon.

    void update_pos(); // Permet à l'ennemi de se déplacer, selon la valeur d'un nombre aléatoire tiré, on va appeler la fonction deplacer()
                       // avec des paramètres variants.

    virtual ~Ennemi();

private:
    int pos_x, pos_y; // Position de l'ennemi.

};

#endif // ENNEMI_H
