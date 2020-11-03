#ifndef LOOT_H
#define LOOT_H
#include <string>

using namespace std;

class Loot
{
    private:
        string type;
        double damage_multiplier;
        double loot_health;


    public:
        Loot();
        double get_multiplier();
        double get_health(); 
        double activate(string type);
};
#endif
