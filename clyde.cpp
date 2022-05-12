#include "clyde.h"
#include <random>
#include <time.h>
void Clyde::new_pos()
{
srand(time(NULL));
int val = rand() % 10;
if(val == 1 || val ==2)
{
    deplacer(1, 0);
}
if(val == 3 || val ==4)
{
    deplacer(-1, 0);
}
if(val == 5 || val ==6 || val ==7)
{
    deplacer(0, 1);
}
if(val == 8 || val ==9 || val == 0)
{
    deplacer(0, -1);
}
}
