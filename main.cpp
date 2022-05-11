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
    if(y-=1 > ymax){
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

    std::string saisie;
    std::cin >> saisie;
    std::cout << "Vous avez saisi " << saisie << std::endl;
    int x=5, y=4;
    deplacer_personnage(x, y, "UP");
    return 0;
}
