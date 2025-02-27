#include<iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "\nEnter 3 numbers:\n\nNumber 1: ";
    cin >> a;
    cout << "\nNumber 2: ";
    cin >> b;
    cout << "\nNumber 3: ";
    cin >> c;
    if (a > b and a > c) {
        cout << "\n" << a << " is the largest number of the three.\n\n";
    }
    else if (b > a and b > c) {
        cout << "\n" << b << " is the largest number of the three.\n\n";
    }
    else if (c > b and c > a) {
        cout << "\n" << c << " is the largest number of the three.\n\n";
    }
    else {
        cout << "\nThe largest number could not be calculated (2 or more are equal).\n\n";
    }
}