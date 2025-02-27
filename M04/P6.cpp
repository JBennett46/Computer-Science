#include<iostream>
using namespace std;
int main() {
    char Character;
    cout << "\nEnter a letter: ";
    cin >> Character;
    if (Character == 'a' or Character == 'e' or Character == 'i' or Character == 'o' or Character == 'u')
    {
        cout << "\nYour letter is a vowel.\n\n";
    }
    else
    {
        cout << "\nYour letter is a consonant.\n\n";
    }
}