#ifndef MAP_H
#define MAP_H
#include "player.h"
#include "loot.h"
#include <string>
#include <utility>
#include <vector>

using namespace std;

class Map
{
    private:
        pair <int,int> exit;
        vector <vector <int>> map;
    
    public:
        Map();
        pair <int,int> get_exit();
};
#endif