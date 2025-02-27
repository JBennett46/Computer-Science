#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < sqrt(n) + 1; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int sum = 2;
    for (int i = 3; i <= 100; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    cout << sum << "\n";
}