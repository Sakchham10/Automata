#include "loot.h"
#include "player.h"
#include "map.h"
#include <string>
#include <time.h>
#include <iostream>

using namespace std;

Map::Map()
{
    srand(time(0));
    int chance;
    for (int i = 0; i < 100 ; i++)
    {
        for (int j = 0 ; j < 100 ; j++)
        {
            chance = rand() % 100;
            if (chance <=50)
            {
                map[i][j] = 0;
            }

            else if (chance < 80 )
            {
                map[i][j] = 1;

            }

            else
            {
                map[i][j] = 2;
            }       
        }
    }    

    exit.first = rand() % 100;
    exit.second = rand() % 100;

    map[exit.first][exit.second] = 3;
}

pair <int,int> Map::get_exit()
{
    return exit;
}