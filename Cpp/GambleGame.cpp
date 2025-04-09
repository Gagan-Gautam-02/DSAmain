#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void rules() {
    cout << "\nWelcome to the Casino! \n";
    cout << "Here are the rules:\n";
    cout << "1. Choose a number between 1 and 10.\n";
    cout << "2. If you guess the correct number, you win 10x your bet.\n";
    cout << "3. If not, you lose your bet amount.\n";
    cout << "4. Game continues until you run out of money or quit.\n\n";
}

int main() {
    string playerName;
    int balance;
    int bet;
    int guess;
    char choice;

    srand(time(0)); // Seed RNG

    cout << "Enter your name: ";
    getline(cin, playerName);

    cout << "Enter the starting balance: ";
    cin >> balance;

    rules();

    do {
        cout << "\nCurrent Balance: " << balance << "\n";

        // Bet input
        do {
            cout << playerName << ", enter your bet amount: ";
            cin >> bet;
            if (bet > balance)
                cout << "Bet exceeds current balance! Try again.\n";
        } while (bet > balance || bet <= 0);

        // Guess input
        do {
            cout << "Guess a number between 1 and 10: ";
            cin >> guess;
        } while (guess < 1 || guess > 10);

        // Generate winning number
        int winningNumber = rand() % 10 + 1;

        if (guess == winningNumber) {
            cout << "Congratulations! You guessed correctly!\n";
            cout << "You won ₹" << bet * 10 << "!\n";
            balance += bet * 9; // profit = 9x
        } else {
            cout << "Sorry, wrong guess. The correct number was " << winningNumber << ".\n";
            cout << "You lost " << bet << ".\n";
            balance -= bet;
        }

        // End game if no money
        if (balance <= 0) {
            cout << "\nYou're out of money! Game over.\n";
            break;
        }

        // Continue?
        cout << "\nDo you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThanks for playing, " << playerName << "!\n";
    cout << "You left with " << balance << ".\n";
    cout << "Good luck next time!\n";

    return 0;
}
