#include<iostream>
using namespace std;
int main() {
    int Number;
    cout << "\nEnter a number: ";
    cin >> Number;
    Number %= 2;
    if (Number > 0)
    {
        cout << "\nYour number is an odd number.\n\n";
    }
    else {
        cout << "\nYour number is an even number.\n\n";
    }
}