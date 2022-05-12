#include <string>
#include <iostream>
#include <personnage.h>

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
