#include <string>
#include <iostream>



class ExceptionBound
{

};

class ExceptionCommand
{

};


bool deplacer_personnage(int &x, int &y, std::string cmd);

bool deplacer_personnage(int &x, int &y, std::string cmd)
{
const int xmin = 0;
const int xmax = 32;
const int ymin = 0;
const int ymax = 15;

if (cmd == "RIGHT")
    {
    if(x < xmax){
    x=x+1;
    return true;
    }
    else{
        throw ExceptionBound();
        return false;
        }
    }

else if (cmd == "LEFT")
    {
    if(x > xmin){
    x--;
    return true;
    }
    else{
        throw ExceptionBound();
        return false;
        }
    }

else if (cmd == "DOWN")
    {
    if(y > ymin){
    y--;
    return true;
    }
    else{
        throw ExceptionBound();
        return false;
        }
    }

else if (cmd == "UP")
    {
    if(y < ymax){
    y++;
    return true;
    }
    else{
        throw ExceptionBound();
        return false;
        }
    }
else if (cmd == "IDLE")
    {
    return true;
    }
else
    throw ExceptionCommand();
        return false;
}

int main(int argc, char** argv)
{

    std::string saisie;
    int x = 1;
    int y = 1;

    while(true){
    std::getline(std::cin, saisie);
    std::cout << "Vous avez saisi " << saisie << std::endl;
    try{
    deplacer_personnage(x, y, saisie);
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
