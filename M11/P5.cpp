#include<iostream>
using namespace std;

void printNums(int n) {
    for (int i = 0; i <= n; i++) {
        cout << i << " ";
    }
}

int main() {
    cout << "\nEnter a number to count to: \n";
    int n;
    cin >> n;
    printNums(n);
    cout << "\n";
}