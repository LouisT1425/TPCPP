#ifndef CLYDE_H
#define CLYDE_H
#include "ennemi.h"

class Clyde : public Ennemi
{
public:
    Clyde(int x, int y, Background *parent);
    void new_pos(); // Fonction permettant de faire bouger les fantomes de façon aléatoire

    virtual ~Clyde();
};

#endif // CLYDE_H
