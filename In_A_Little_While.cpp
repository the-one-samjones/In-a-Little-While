#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                             //Seed a random number
    int randomNumber = rand();              //Generate a random number
    int userGuess;
    randomNumber = randomNumber % 10 + 1;               //Limit random number to 1-10
    cout << "Guess the random number between 1 and 10: ";           //Prompt the user for input 
    cin >> userGuess;                                               //Get user input, store in userGuess
    while (userGuess != randomNumber) {                         //While the user guess is not equal to the random number 
        if ( userGuess > randomNumber) {                      //If the user guess is greater, or less than than the random number 
            cout << "Too high! Try again: "; 
        }
        if (userGuess < randomNumber) {
            cout << "Too low! Try again: ";
        }
        cin >> userGuess;                           //Get user input again
    }
    cout << "You guessed Correctly!";               //If user guess is equal to random number, print this message
    return 0;
}