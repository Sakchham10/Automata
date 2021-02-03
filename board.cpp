#include "loot.h"
#include "player.h"
#include "board.h"
#include "wizard.h"
#include "knight.h"
#include "assassin.h"
#include <string>
#include <time.h>
#include <iostream>

using namespace std;

Board::Board()
{
    create_player();
    srand(time(0));
    int chance;
    int E_number = 0;
    int O_number = 0;
    int L_number = 0;
    int random;
    int temp;
    int temp2 = 100;
    vector<int>generation;

    
    for (int i = 0; i < 100 ; i ++)
    {
        generation.push_back(i);
    }
    for (int i=0 ; i< 10 ; i++)
    {
        vector<int> create;
        for (int j = 0; j <10; j++)
        {
            random = rand() % temp2;
            temp = random;
            random = generation[random];
            generation.erase(generation.begin()+temp);
            temp2--;
            if(random < 50)
            {
                Enemy enemy(i, j);
                enemy_list.push_back(enemy);
                create.push_back(0);
            } 

            else if(random < 85)
            {
                Loot loot(i, j);
                loot_list.push_back(loot);
                create.push_back(1);
            } 

            else
            {
                create.push_back(2);
            }
        }
        board.push_back(create); 
  
    }
}


pair <int,int> Board::get_exit()
{
    return exit;
}
void Board::create_player()
{
    string choice;
    cout << "Choose your class" << endl;
    cout << "Kinght - K" << endl;
    cout << "Wizard - W" << endl;
    cout << "Assassin - A" << endl;
    getline(cin,choice);

    if (choice == "K" || choice == "k")
    {
        player1 = Knight();
    }
    else if (choice == "W" || choice == "w")
    {
        player1 = Wizard();
    }
    else if(choice == "A" || choice == "a")
    {
        player1 = Assassin();
    }
}

pair<int,int> Board::get_position()
{
    return player1.get_position();
}

Player* Board::get_player()
{
    return &player1;
}



