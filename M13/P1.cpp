#include<iostream>
#include<fstream>
using namespace std;

void game(int num) {
    int guess;
    do {
        cout << "\nEnter a Guess: ";
        cin >> guess;
        if (guess > num) {
            cout << "Too High.";
        }
        else if (guess < num) {
            cout << "Too Low.";
        }
        else {
            cout << "You got it.\n";
            break;
        }
    } while (guess!=num);
    
}

int main() {
    ifstream guesses("guesses.txt");
    while(!guesses.eof()) {
        int numToGuess;
        guesses >> numToGuess;
        game(numToGuess);
        cout << "Again? Enter 'n' to end.";
        char Choice;
        cin >> Choice;
        if (Choice == 'n')
        {
            break;
        }
    }
    
    
}