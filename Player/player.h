#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <utility>

using namespace std;

class Player
{
    protected:
        string type;
        double hp;
        double damage;
        pair <int,int> position;

    public:
        Player();
        double get_hp();
        double get_damage();
        pair<int,int> get_position();
};

#endif