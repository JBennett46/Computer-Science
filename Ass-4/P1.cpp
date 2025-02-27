#include<iostream>
using namespace std;
int main() {
    int Age;
    cout << "\nPlease enter your age as a whole number.\n\nAge: ";
    cin >> Age;
    if (0 <= Age and Age <= 12) {
        cout << "\nYou are a child.\n" << endl;
    }
    if (13 <= Age and Age <= 19) {
        cout << "\nYou are a teenager.\n" << endl;
    }
    if (20 <= Age and Age <= 64) {
        cout << "\nYou are an adult.\n" << endl;
    }
    if (65 <= Age) {
        cout << "\nYou are a senior citizen.\n" << endl;
    }
}