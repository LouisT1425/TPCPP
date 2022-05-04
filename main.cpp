#include <string>


bool deplacer_personnage(int &x, int &y, std::string cmd);

int main(int argc, char** argv)
{
int x=5, y=4;
deplacer_personnage(x, y, "UP");
return 0;
}

bool deplacer_personnage(int x, int y, std::string cmd)
{
const int xmin = 0;
const int xmax = 32;
const int ymin = 0;
const int ymax = 15;

if (cmd == "RIGHT")
    {
    x+=1;
    return true;
    }
else if (cmd == "LEFT")
    {
    x-=1;
    return true;
    }
else if (cmd == "DOWN")
    {
    y+=1;
    return true;
    }
else if (cmd == "UP")
    {
    y-=1;
    return true;
    }
else if (cmd == "IDLE")
    {
    return true;
    }
else
        return false;
}
