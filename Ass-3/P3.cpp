#include<iostream>
using namespace std;
int main() {
    float Val1, Val2, Val3, Avg;
    cout << "\nEnter 3 numbers to have their average calculated.\n\nValue 1: ";
    cin >> Val1;
    cout << "\nValue 2: ";
    cin >> Val2;
    cout << "\nValue 3: ";
    cin >> Val3;
    Avg = (Val1+Val2+Val3)/3;
    cout << "\n\nAverage = " << Avg << "\n\n";
}