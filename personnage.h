#include <string>
#ifndef PERSONNAGE_H
#define PERSONNAGE_H


class Personnage
{
private :

    int pos_x = 1;
    int pos_y = 1;
    std::string deplacementCourant;

public:
    Personnage(int x, int y);
    bool new_pos();
    void deplacementSetter(std::string deplacement);
};

#endif // PERSONNAGE_H
