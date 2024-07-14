#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame(int range)
{
    srand(time(0)); // Seed the random number generator
    int numberToGuess = rand() % range + 1;
    int userGuess = 0;
    int numberOfTries = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I have selected a number between 1 and " << range << ". Can you guess it?" << endl;

    while (userGuess != numberToGuess)
    {
        cout << "Enter your guess: ";
        cin >> userGuess;
        numberOfTries++;

        if (userGuess < numberToGuess)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (userGuess > numberToGuess)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << numberOfTries << " tries." << endl;
        }
    }
}

int main()
{
    int range;

    cout << "Enter the range for the number to guess (e.g., 100 for a number between 1 and 100): ";
    cin >> range;

    playGame(range);

    return 0;
}
