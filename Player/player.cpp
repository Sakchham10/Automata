#include "loot.h"
#include "player.h"
#include "knight.h"
#include "wizard.h"
#include "assassin.h"
#include <string>
#include <time.h>
#include <iostream>

using namespace std;

Player::Player()
{

    int x;
    int y;
    cout << "Please enter the initial x position" << endl;
    cin >> x;
    cout << endl;
    cout << "Please enter the initial y position" << endl;
    cin >> y;
    cout << endl;

    position.first= x;
    position.second= y;
}

double Player::get_hp()
{
    return hp;
}

double Player::get_damage()
{
    return damage;
}

pair<int,int> Player::get_position()
{
    return position;
}