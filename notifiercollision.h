#ifndef NOTIFIERCOLLISION_H
#define NOTIFIERCOLLISION_H
#include <vector>

class ObserverCollision;

class NotifierCollision
{
private :
    std::vector<ObserverCollision*> _observateurs; // Vecteur d'observateurs "abonnés" au notifier.
public:
    NotifierCollision();

    void addObserver(ObserverCollision* obs); // Ajoute un observateur à la liste des observateurs.
    void removeObserver(ObserverCollision* obs); // Supprime un observateur de la liste des observateurs.

    void notify(int x, int y); // Cette fonction va notifier chaque observateur d'une collision si il y a une collision.

};

#endif // NOTIFIERCOLLISION_H
