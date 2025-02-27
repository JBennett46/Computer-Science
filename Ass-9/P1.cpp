#include<iostream>
using namespace std;

int main() {
    cout << "\nEnter a whole number: ";
    int count = 0;
    int j = 1;
    cin >> count;
    for (int r = 1; r <= count; r++) {
        for (int c = 0; c < r; c++) {
            cout << j << " ";
            j++;
        }
        cout << "\n";
    }
}