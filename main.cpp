#include <string>
#include <iostream>



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
    else
        return false;
    }

else if (cmd == "LEFT")
    {
    if(x > xmin){
    x--;
    return true;
    }
    else
        return false;
    }

else if (cmd == "DOWN")
    {
    if(y > ymin){
    y--;
    return true;
    }
    else
        return false;
    }

else if (cmd == "UP")
    {
    if(y < ymax){
    y++;
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

    std::string saisie;
    int x = 1;
    int y = 1;

    while(true){
    std::getline(std::cin, saisie);
    std::cout << "Vous avez saisi " << saisie << std::endl;
    deplacer_personnage(x, y, saisie);
    std::cout << "X vaut " << x << ", Y vaut " << y << std::endl;
    }

    return 0;
}
