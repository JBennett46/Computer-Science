#include<iostream>
using namespace std;
int main() {
    int Month;
    cout << "\nEnter the number of a month (January = 1, February = 2, etc.)\n\nMonth: ";
    cin >> Month;
    if (Month == 1 or Month == 3 or Month == 5 or Month == 7 or Month == 8 or Month == 10 or Month == 12) {
        cout << "\nYour month has 31 days.\n\n";
    }
    else if (Month == 2) {
        cout << "\nYour month has 28 days.\n\n";
    }
    else {
        cout << "\nYour month has 30 days.\n\n";
    }
}