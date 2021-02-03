#ifndef LOOT_H
#define LOOT_H
#include <string>
#include<utility>

using namespace std;

class Loot
{
    private:
        string type;
        double damage_multiplier;
        double loot_health;
        pair<int, int> loot_position;
    
    public:
        Loot(int x, int y);
        double get_multiplier();
        double get_health(); 
        double activate(string type);
};
#endif
