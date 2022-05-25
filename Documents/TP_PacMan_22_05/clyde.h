#ifndef CLYDE_H
#define CLYDE_H
#include "ennemi.h"

class Clyde :public Ennemi
{
public:
    Clyde();
    void new_pos();

    virtual ~Clyde();
};

#endif // CLYDE_H
