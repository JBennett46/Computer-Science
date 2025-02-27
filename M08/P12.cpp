#include<iostream>
using namespace std;
int main() {
    string Pass = "Saddleback!";
    string attempt;
    int i;
    for (i = 3; i > 2; i++)
    {
        cout << "\nPlease Enter a Password: ";
        getline (cin, attempt);
        if (attempt == Pass) {
            cout << "\nPassword accepted.\n\n";
            break;
        }
        else {
            cout << "Try again.";
        }
    }
}