#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    int numberToGuess = rand() % 100 + 1;  // Random number between 1 and 100

    int userGuess;
    int guessCount = 0;

    cout << "Guess the number (between 1 and 100): ";

    // Loop until user guesses correctly
    do {
        cin >> userGuess;
        guessCount++;

        if (userGuess > numberToGuess) {
            cout << "Too high, try again: ";
        } else if (userGuess < numberToGuess) {
            cout << "Too low, try again: ";
        }
    } while (userGuess != numberToGuess);

    cout << "Congratulations! You guessed the number in " << guessCount << " attempts." << endl;

    return 0;
}