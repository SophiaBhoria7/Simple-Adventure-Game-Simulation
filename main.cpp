// Programmer: Sophia Bhoria
// Date: Oct 08, 2024
// Purpose: Controls the game loop and interacts with the player, calling functions to simulate turns and display status. 

#include "game.h"

int main() {
    // Initialize player with 50 health and 0 score
    Player player = {50, 0};

    // Main game loop
    while (player.health > 0) {
        simulateTurn(player);   // Simulate a turn
        displayStatus(player);  // Display player status

        // Pause for user input
        cout << "Press Enter to continue." << endl;
        cin.ignore();  // Wait for the user to press Enter
    }

    // Game over message
    cout << "Game over! Final score: " << player.score << endl;

    return 0;
}
