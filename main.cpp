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
    int x = 1;
    int y = 1;

    while(true){
    std::getline(std::cin, saisie);
    std::cout << "Vous avez saisi " << saisie << std::endl;
    try{
    PacMan.new_pos();
    }
    catch(ExceptionBound&)
    {
        std::cout << "ExceptionBound caught, out of bounds" << std::endl;
    }
    catch(ExceptionCommand&)
    {
        std::cout << "ExceptionCommand caught, wrong command" << std::endl;
    }
    std::cout << "X vaut " << x << ", Y vaut " << y << std::endl;
    }

    return 0;
}
