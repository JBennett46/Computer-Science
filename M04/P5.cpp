#include<iostream>
using namespace std;
int main() {
    char Character;
    cout << "\nEnter a letter: ";
    cin >> Character;
    if (Character == 'a')
    {
        cout << "\nPassword accepted.\n\n";
    }
    else
    {
        cout << "\nPassword denied.\n\n";
    }
    
}