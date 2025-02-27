#include<iostream>
using namespace std;
int main() {
    int last;
    bool Ascending = true, Descending = true, Shuffled = false;
    cout << "\nEnter 10 numbers:\n";
    cin >> last;
    for (int i = 0; i < 9; i++) {
        int num;
        cin >> num;
        if (num < last) {
            Ascending = false;
        } 
        if (num > last) {
            Descending = false;
        } 
        if (Descending == false and Ascending == false) {
            Shuffled = true;
        } 
        last = num;
    } 
    if (Ascending) {
        cout << "\nThe numbers are in ascending order.\n";
    } 
    else if (Descending) {
        cout << "\nThe numbers are in descending order.\n";
    } 
    else if (Shuffled) {
        cout << "\nThe numbers are shuffled.\n";
    }
}