#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator with current time

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1; 
    int userGuess;
    int attemptsCounter = 0; // Counter to track number of attempts

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100.\n";
    cout << "Try to guess the number!\n";

    // Start guessing loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;  // Take user's guess as input
        attemptsCounter++;  // Increment attempts counter

        // Check if the guess is correct, too high, or too low
        if (userGuess < secretNumber) {
            cout << "Your guess is too low! Try again.\n";
        } else if (userGuess > secretNumber) {
            cout << "Your guess is too high! Try again.\n";
        } else {
            // User guessed correctly
            cout << "Congratulations! You've guessed the number in " 
                 << attemptsCounter << " attempts.\n";
            break; // Exit the loop when the guess is correct
        }
    }

    return 0;
}
