#include<iostream>
using namespace std;

int reverse(int n) {
    int res = 0;
    while (n > 0) {
        int rmd = n % 10;
        n = n / 10;
        res = res * 10 + rmd;
    }
    return res;
}

int main() {
    int n;
    cout << "Enter whole number: ";
    cin >> n;
    if (n == reverse(n)) {
        cout << "yay";
    }
    else {
        cout << "nay";
    }
}