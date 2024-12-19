// Programmer: Sophia Bhoria
// Date: Oct 08, 2024
// Purpose: Implements the game logic, including random event generation and player status updates.

#include "game.h"
#include <cstdlib>
#include <ctime>

// Function to simulate a single turn in the game
void simulateTurn(Player& p) {
    srand(time(0)); // Seed the random number generator
    int event = rand() % 3; // Random event (0, 1, or 2)

    if (event == 0) {
        // Player finds a health potion and gains between 5 and 20 health points
        int healthGain = 5 + rand() % 16; // Generate number between 5 and 20
        p.health += healthGain;
        cout << "You found a health potion! +" << healthGain << " health points." << endl;
    } else if (event == 1) {
        // Player is attacked and loses between 10 and 30 health points
        int healthLoss = 10 + rand() % 21; // Generate number between 10 and 30
        p.health -= healthLoss;
        cout << "You were attacked! -" << healthLoss << " health points." << endl;
    } else if (event == 2) {
        // Player finds treasure and gains 50 score points
        p.score += 50;
        cout << "You found a treasure! +50 score points." << endl;
    }
}

// Function to display the current status of the Player
void displayStatus(const Player& p) {
    cout << "Player Health: " << p.health << ", Player Score: " << p.score << endl;
}
