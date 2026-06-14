#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator using system time
    srand(time(0));

    int userChoice;
    // Generate a random number between 1 and 3
    int computerChoice = (rand() % 3) + 1;

    cout << "=== ROCK PAPER SCISSORS ===" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    // Validate user input
    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Please restart and pick 1, 2, or 3." << endl;
        return 1;
    }

    // Display User Choice
    cout << "You chose: ";
    if (userChoice == 1) cout << "Rock" << endl;
    else if (userChoice == 2) cout << "Paper" << endl;
    else cout << "Scissors" << endl;

    // Display Computer Choice
    cout << "Computer chose: ";
    if (computerChoice == 1) cout << "Rock" << endl;
    else if (computerChoice == 2) cout << "Paper" << endl;
    else cout << "Scissors" << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } 
    else if ((userChoice == 1 && computerChoice == 3) || 
             (userChoice == 2 && computerChoice == 1) || 
             (userChoice == 3 && computerChoice == 2)) {
        cout << "You win! 🎉" << endl;
    } 
    else {
        cout << "Computer wins! 🤖" << endl;
    }

    return 0;
}
