#include<iostream>
using namespace std;
int main() {
    int Number, Number2, Result;
    cout << "\nEnter a whole number: ";
    cin >> Number;
    Number2 = Number / 100;
    Result = Number2 % 10;
    cout << "\nThe third number from the right is: " << Result << "\n\n";
}