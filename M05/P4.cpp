#include<iostream>
using namespace std;
int main() {
    int age;
    string(Child) = " Child Ticket ...... $5.00";
    string(Teen) = " Teen Ticket ...... $8.00";
    string(Adult) = "n Adult Ticket ...... $12.00";
    string(Senior) = " Senior Ticket ...... $6.00";
    string Selection;
    cout << "\nEnter your age to see your Ticket Price: \nAge: ";
    cin >> age;
    if (0 < age and age < 130) {
        if (0 < age and age <= 12)
        {
            Selection = Child;
        }
        else if (12 < age and age <= 18)
        {
            Selection = Teen;
        }
        else if (18 < age and age <= 64)
        {
            Selection = Adult;
        }
        else if (64 < age)
        {
            Selection = Senior;
        }
        cout << "\nYour ticket is a" << Selection << "\n\n";
    }
    else {
        cout << "\nThat is not a valid age.\n\n";
    }
}