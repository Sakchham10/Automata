#ifndef GAME_H
#define GAME_H
#include "player.h"
#include "loot.h"
#include "map.h"

using namespace std;

class Game
{
    private:
        Player player1;
        Map map1;

    public:
        void display();
        
};
#endif