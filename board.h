#ifndef BOARD_H
#define BOARD_H
#include "player.h"
#include "loot.h"
#include "enemy.h"
#include <string>
#include <utility>
#include <vector>

using namespace std;

class Board
{
    private:
        pair <int,int> exit;
        vector <vector <int>> board;
        vector <Loot> loot_list;
        vector<Enemy> enemy_list;
        Player player1;
    
    public:
        Board();
        pair <int,int> get_exit();
        void create_player();
        pair<int,int> get_position();
        Player* get_player();
};
#endif