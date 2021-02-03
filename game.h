#ifndef GAME_H
#define GAME_H
#include "player.h"
#include "loot.h"
#include "board.h"
#include <utility>


using namespace std;

class Game
{
    private:
        Board board1;
        Player* player1;

    public:
        void display(); 
        string input();
        Game();
        Board get_board();
        void run();
        void display_intial();

       
};
#endif