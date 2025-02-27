#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "\nEnter a whole number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < n; i++) {
            cout << "* ";
        }
        cout << "\n";
    }
}