// Programmer: Sophia Bhoria
// Date: Oct 08, 2024
// Purpose: Defines the Player struct and declares the function prototypes used in the game.

#ifndef GAME_H
#define GAME_H

#include <iostream>
using namespace std;

// Struct for Player
struct Player {
    int health;
    int score;
};

// Function prototypes
void simulateTurn(Player& p);
void displayStatus(const Player& p);

#endif
