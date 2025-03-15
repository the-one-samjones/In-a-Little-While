#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int randomNumber = rand();
    int userGuess;
    randomNumber = randomNumber % 10 + 1;
    cout << randomNumber;
    cout << "Guess the random number between 1 and 10: ";
    cin >> userGuess;
    while (userGuess != randomNumber) {
        if ( userGuess > randomNumber) {
            cout << "Too high! Try again: "; 
        }
        if (userGuess < randomNumber) {
            cout << "Too low! Try again: ";
        }
        cin >> userGuess;
    }
    cout << "You guessed Correctly!";
    return 0;
}