#ifndef ENEMY_H
#define ENEMY_H
#include <string>
#include <utility>

using namespace std;

class Enemy
{
    private:
        string enemy_type;
        int hp;
        int damage;
        pair <int,int> enemy_position;

    public:
        Enemy(int x, int y);  
        double get_hp();
        double get_damage();
        pair <int,int> get_Eposition();
};
#endif