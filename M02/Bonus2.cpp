#include<iostream>
using namespace std;
int main() {
    int Number;
    cout << "Enter a whole number: ";
    cin >> Number;
    cout << "\nThe right most digit is: " << Number % 10 << "\n\n";
}