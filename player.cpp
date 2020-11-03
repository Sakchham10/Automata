#include "loot.h"
#include "player.h"
#include <string>
#include <time.h>
#include <iostream>

using namespace std;

Player::Player()
{
    string choice;
    cout << "Choose your class" << endl;
    cout << "Kinght - K" << endl;
    cout << "Miner - M" << endl;
    cout << "Assassin - A" << endl;
    getline(cin,choice);

    if (choice == "K" || choice == "k")
    {
        hp = 150;
        damage = 20;
    }

    else if (choice == "M" || choice == "m")
    {
        hp = 100;
        damage = 16;
    }

    else if(choice == "A" || choice == "a")
    {
        hp = 80;
        damage = 12;
    }

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