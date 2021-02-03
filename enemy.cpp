#include "enemy.h"
#include<time.h>

using namespace std;

Enemy::Enemy(int x, int y)
{
    hp =80;
    damage = 17.5;
    enemy_position.first = x;
    enemy_position.second = y;
}

double Enemy::get_damage()
{
    return damage;
}

double Enemy::get_hp()
{
    return hp;
}

pair<int,int> Enemy::get_Eposition()
{
    return enemy_position;
}

