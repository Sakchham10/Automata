#include "loot.h"
#include <string>
#include <time.h>
#include <iostream>

using namespace std;

double Loot::get_multiplier()
{
    return damage_multiplier;
}

double Loot::get_health()
{
    return loot_health;
}

Loot::Loot()
{
    srand(time(0));
    int random;
    random = rand() % 100;

    if (random < 50)
    {
        type = "bronze";
        damage_multiplier = 1.05;
        loot_health =  25;
    }

    else if (random < 85)
    {
        type = "silver";
        damage_multiplier = 1.10;
        loot_health = 35;
    }

    else
    {
        type = "gold";
        damage_multiplier = 1.20;
        loot_health = 50;
    }
}

double Loot::activate(string type)
{
    int selector;
    srand(time(0));
    if (type == "bronze" || type == "silver")
    {
        selector = rand() % 100; 
        if (selector <= 50)
        {
            return damage_multiplier;
        }
        else 
        {
            return loot_health;
        }
    }
    if (type == "gold")
    {
        string choice;
        cout << "What loot do you want?" << endl;
        cout << "Press 'h' for health 'd' for damage" << endl;
        getline(cin,choice);

        if (choice == "h")
        {
            return loot_health;
        } 

        else if (choice == "d")
        {
            return damage_multiplier;
        }

        else 
        {
            cout << "You entered a wrong character" << endl;
            cout << "YOu have been punished" << endl;
            loot_health = -10;
            return loot_health;
        }
        
    }
}