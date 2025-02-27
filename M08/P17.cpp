#include<iostream>
using namespace std;
int main() {
    double sum = 0;
    cout << "\nEnter numbers to be added. Enter 0 to finish.\n";
    for (;;) {
        float num;
        if (num == 0) {
            cout << "\nTotal sum = " << sum << "\n";
            break;
        } else {
            cin >> num;
            sum += num;
        }
    }
}