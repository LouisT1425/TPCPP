#include <string>
#include <iostream>
#include <array>
#include <vector>
#include "exceptionsizetab.h"
#include "personnage.h"
#include "clyde.h"
//nous devons initialiser la fonction avant le main afin que nous puissions l'utiliser dans le main
bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y);


bool deplacer_personnage(int &x, int &y, std::string cmd);

bool deplacer_personnage(int &x, int &y, std::string cmd)
{
const int xmin = 0;
const int xmax = 32;
const int ymin = 0;
const int ymax = 15;

if (cmd == "RIGHT")
    {
    if(x+=1 < xmax){
    x++;
    return true;
    }
    else
        return false;
    }

else if (cmd == "LEFT")
    {
    if(x-=1 > xmin){
    x--;
    return true;
    }
    else
        return false;
    }

else if (cmd == "DOWN")
    {
    if(y+=1 < ymax){
    y++;
    return true;
    }
    else
        return false;
    }

else if (cmd == "UP")
    {
    if(y-=1 > ymin){
    y--;
    return true;
    }
    else
        return false;
    }
else if (cmd == "IDLE")
    {
    return true;
    }
else
        return false;
}

int main(int argc, char** argv)
{

    Personnage PacMan(1, 1);

    std::string saisie;
    while(true)
    {
    std::getline(std::cin, saisie);
    std::cout << "Vous avez saisi " << saisie << std::endl;
    PacMan.deplacementSetter(saisie);
    PacMan.new_pos();
    std::cout << "X vaut " << PacMan.getPos_x() << ", Y vaut " << PacMan.getPos_y() << std::endl;
    }

    int enny[3], enx[3];
    try {
        detecter_collision(enx, enny,4,6,6);
        }
    catch(ExceptionSizeTab)
    {
        std::cout << "le nombre d'ennemies n'est pas correct" << std::endl;
    }
    return 0;
}
//declaration de la fonction
bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y)
{
    //creation d'une variable de type ExceptionSizeTab afin de pouvoir levée une exception si le nombre d'ennemi est inférieur a 0
    ExceptionSizeTab test;
    int i = 0;
    int u = 0;
    bool collision = 0;
    //si le nombre d'ennemis est superieur a 0 alors on affecte les valeurs de la position de x et de y dans un tableau
    if(nb_ennemis > 0)
    {
        std::vector<int> tableaux(nb_ennemis);
        std::vector<int> tableauy(nb_ennemis);

        for(i=0; i<nb_ennemis; i++)
        {
            tableaux[i] = ennemis_x[i];
            tableauy[i] = ennemis_y[i];
        }
        //on regarde si un des ennemis est a la meme position x, y qu'un personnage si oui le bool collision passe a  sinon il reste a  et on retourne la valeur du booléen
        for(u=0; u<nb_ennemis; u++)
        {
            if((tableaux[u] == x) && (tableauy[u] == y))
                collision = 1;
        }
        return collision;
    }
    //si le nombre d'ennemis est inferieur ou egale a 0 alors une exception est levée
    else
    {
        throw test;
    }
}
