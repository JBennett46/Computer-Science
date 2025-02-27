#include<iostream>
using namespace std;
int main() {
    float F, C;
    cout << "\nEnter a temperature in Fahrenheit to see its value in Celsius.\n\nTemp (\xc2\xb0" "F): ";
    cin >> F;
    C = (F-32)*(5.0/9.0); //turns out you don't need spaces in between different math functions
    cout << "\nTemp (\xc2\xb0" "C): " << C << "\n\n";
}