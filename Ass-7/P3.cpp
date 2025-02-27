#include<iostream>
using namespace std;
int main() {
    int result = 0, limit, beforeLast = 0, last = 1;
    cout << "\nEnter a limit to generate the Fibonacci sequence to:\n";
    cin >> limit;
    if (limit >= 1) {
        cout << "\n" << beforeLast;
        if (limit >= 2) {
            cout << " " << last << " ";
        }
    }
    for (int i = 0; i < limit - 2; i++) {
        int result = beforeLast + last;
        cout << result << " ";
        beforeLast = last;
        last = result;
    }
    if (result == 0) {
        cout << "Something went wrong. Make sure you enter a positive whole number.";
    }
    cout << "\n";
}