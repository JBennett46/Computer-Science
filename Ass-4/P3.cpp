#include<iostream>
using namespace std;
int main() {
    float Day;
    cout << "\nEnter the day of the week as a number (Monday = 1, Sunday = 7, etc.)\n\nDay: ";
    cin >> Day;
    if (1 <= Day and Day <= 5) {
        cout << "\nYou have entered a weekday.\n" << endl;
    }
    else if (6 <= Day and Day <= 7 ) {
        cout << "\nYou have entered a weekend.\n" << endl;
    }
    else {
        cout << "\nYou entered in invalid day.\n" << endl;
    }
}