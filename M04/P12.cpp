#include<iostream>
using namespace std;
int main() {
    int Choice;
    cout << "\nMake a selection to see the price.\n==================================\n1: Hotdog\n2: Burger\n3: Pasta\n4: Wings\n5: SuperMega Combo\n\nEnter selection number: ";
    cin >> Choice;
    if (Choice == 1) {
        cout << "\nPrice: $10\n\n";
    }
    else if (Choice == 2) {
        cout << "\nPrice: $20\n\n";
    }
    else if (Choice == 3) {
        cout << "\nPrice: $30\n\n";
    }
    else if (Choice == 4) {
        cout << "\nPrice: $25\n\n";
    }
    else if (Choice == 5) {
        cout << "\nPrice: $39\n\n";
    }
    else {
        cout << "\nThat is not a valid selection.\n\n";
    }
}