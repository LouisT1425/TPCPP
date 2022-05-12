#include <string>
#include <iostream>
#include <personnage.h>
#include <string>
#include <iostream>
#include <array>
#include <vector>
#include "exceptionsizetab.h"

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y);




class ExceptionBound
{

};

class ExceptionCommand
{

};

int main(int argc, char** argv)
{
    Personnage PacMan(1, 1);
    std::string saisie;


    while(true){
    std::getline(std::cin, saisie);
    std::cout << "Vous avez saisi " << saisie << std::endl;
    PacMan.deplacementSetter(saisie);
    PacMan.new_pos();
    std::cout << "X vaut " << PacMan.getPos_x() << ", Y vaut " << PacMan.getPos_y() << std::endl;
    }
    return 0;
}

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y)
{
    ExceptionSizeTab testdebug;
    int i = 0;
    int u = 0;
    bool collision = 0;
    if(nb_ennemis > 0)
    {
        std::vector<int> tableaux(nb_ennemis);
        std::vector<int> tableauy(nb_ennemis);

        for(i=0; i<nb_ennemis; i++)
        {
            tableaux[i] = ennemis_x[i];
            tableauy[i] = ennemis_y[i];
        }
        for(u=0; u<nb_ennemis; u++)
        {
            if((tableaux[u] == x) && (tableauy[u] == y))
                collision = 1;
        }
        return collision;
    }
    else
    {
        throw testdebug;
    }
}
