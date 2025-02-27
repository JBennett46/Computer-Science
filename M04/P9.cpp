#include<iostream>
using namespace std;
int main() {
    int Day, rollover;
    cout << "\nEnter a number: ";
    cin >> Day;
    Day %= 7;
    if (Day == 2) {
        cout << "\nMonday\n\n";
    }
    if (Day == 3) {
        cout << "\nTuesday\n\n";
    }
    if (Day == 4) {
        cout << "\nWednesday\n\n";
    }
    if (Day == 5) {
        cout << "\nThursday\n\n";
    }
    if (Day == 6) {
        cout << "\nFriday\n\n";
    }
    if (Day == 0) {
        cout << "\nSaturday\n\n";
    }
    if (Day == 1) {
        cout << "\nSunday\n\n";
    }
}