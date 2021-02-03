#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include "player.h"
#include "loot.h"
#include "board.h"
#include "game.h"

using namespace std;

void Game::display()
{
    pair <int,int> current_position;
    current_position = board1.get_position();  
    cout << "Your current location is:" <<  endl;
    cout << current_position.first << "," << current_position.second << endl; 
    cout << "There are:" << endl;
    cout << "x number of enemies" << endl;  // insert variable
    cout << "y number of loot" << endl;  // insert variable
    cout << "z number of open blocks" <<endl; // insert variable
    cout << "Your moves are:" << endl;
    if (current_position.second >= 1 )
    {
        cout << "UP: (" << current_position.first << "," << current_position.second - 1 << ")" << endl; 
    }

     if (current_position.second < 99 )
     {
        cout << "Down : ("  << current_position.first << "," << current_position.second + 1 << ")" << endl; 
     }
    
    if (current_position.first >= 1 )
    {
        cout << "Left: (" << current_position.first - 1 << "," << current_position.second  << ")" << endl; 
    }

    if (current_position.first < 99 )
    {
        cout << "Right : ("  << current_position.first + 1 << "," << current_position.second << ")" << endl; 
    }

     // to do : 

     // enforce correct choices
}

string Game::input()
{
    string next_move;
    cout << "Please enter to which direction you want to move" << endl;
    cin >> next_move;
    return next_move;
}

Game::Game()
{
    board1 = Board();
    player1 = board1.get_player();
}

Board Game::get_board()
{
    return board1;
}

void Game::run()
{
  
}

void Game::display_intial()
{
    cout << "You have chosen your intial position:" << endl;
    cout << "( " << player1->get_position().first;
    cout << ", " << player1->get_position().second << " )" << endl;
}


