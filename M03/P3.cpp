#include<iostream>
using namespace std;
int main() {
    float Float;
    cout << "\nEnter a number: ";
    cin >> Float;
    Float = ++Float;
    Float = ++Float;
    Float += 5;
    Float -= 5;
    Float *= 5;
    Float /= 5;
    Float = --Float;
    Float = --Float;
    cout << "\n" << Float << "\n\n";
}