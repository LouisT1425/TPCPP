#include <string>
#include <iostream>
#include <array>
#include <vector>
#include "exceptionsizetab.h"
#include "personnage.h"
#include "clyde.h"
#include "mainwindow.h"
#include "background.h"
#include "pastille.h"
#include <QApplication>
#include <time.h>

//nous devons initialiser la fonction avant le main afin que nous puissions l'utiliser dans le main
bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y);

int main(int argc, char** argv)
{
    srand(time(NULL));

    QApplication *app = new QApplication(argc, argv);
    MainWindow *window = new MainWindow();
    window->show();
//    std::string saisie, saisieClyde;

//    fantome1->addObserver(pacMan);
//    fantome2->addObserver(pacMan);
//    pacMan->addObserver(fantome1);
//    pacMan->addObserver(fantome2);
//    pacMan->addObserver(pastille);

//    while(true){
//        std::getline(std::cin, saisie);
//        std::cout << "Vous avez saisi " << saisie << std::endl;
//        pacMan->deplacementSetter(saisie);
//        pacMan->new_pos();
//        std::cout << "X vaut " << pacMan->getPos_x() << ", Y vaut " << pacMan->getPos_y() << std::endl;
//    }

//    int enny[3], enx[3];
//    try {
//        detecter_collision(enx, enny,3,6,6);
//        }
//    catch(ExceptionSizeTab)
//    {
//        std::cout << "le nombre d'ennemies n'est pas correct1" << std::endl;
//    }
    return app->exec();
}
//declaration de la fonction
//bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y)
//{
//    //creation d'une variable de type ExceptionSizeTab afin de pouvoir levée une exception si le nombre d'ennemi est inférieur a 0
//    ExceptionSizeTab testdebug;
//    int i = 0;
//    int u = 0;
//    bool collision = 0;
//    //si le nombre d'ennemis est superieur a 0 alors on affecte les valeurs de la position de x et de y dans un tableau
//    if(nb_ennemis > 0)
//    {
//        std::vector<int> tableaux(nb_ennemis);
//        std::vector<int> tableauy(nb_ennemis);

//        for(i=0; i<nb_ennemis; i++)
//        {
//            tableaux[i] = ennemis_x[i];
//            tableauy[i] = ennemis_y[i];
//        }
//        //on regarde si un des ennemis est a la meme position x, y qu'un personnage si oui le bool collision passe a  sinon il reste a  et on retourne la valeur du booléen
//        for(u=0; u<nb_ennemis; u++)
//        {
//            if((tableaux[u] == x) && (tableauy[u] == y))
//                collision = 1;
//        }
//        return collision;
//    }
//    //si le nombre d'ennemis est inferieur a  alors une exception est levée
//    else
//    {
//        throw testdebug;
//    }
//}
