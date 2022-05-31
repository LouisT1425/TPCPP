#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include "observercollision.h"
#include "notifiercollision.h"
#include "interactive.h"

class Personnage : public ObserverCollision, public NotifierCollision, public Interactive
{
private :

    std::string deplacementCourant; //deplacement actuel du personnage

public:
    Personnage(int x, int y, Background *parent);

    bool new_pos(); // Permet de faire avancer le personnage selon son deplacementCourant, gère également les téléportations lorsque le personnage dépasse
                    // les bordures de l'écran.
    void deplacementSetter(std::string deplacement); // setter du deplacementCourant0

    std::string getDeplacementCourant(); // getter du deplacementCourant

    void key_pressed(char key); // Renvoie un message dans la console si le joueur appuie sur les touches du clavier(autre que les fleches).
                                // Cette fonction est appellée dans la fonction arrow_pressed() si la situation ci-dessus est recontrée.
    void arrow_pressed(std::string cmd); // Appelle le deplacementSetter() avec comme paramètre la direction, selon la flèche du clavier sur laquelle on appuie.

    void update_pos(); // Met à jour la position du personnage à chaque frame.

    virtual bool test_collision(int x, int y); // Retourne 1 si la position du personnage est égale aux paramètre, 0 sinon.

    virtual void collision(NotifierCollision *notifieur); // Envoie un message dans la console si il y a une collision.

    virtual ~Personnage();
};

#endif // PERSONNAGE_H
