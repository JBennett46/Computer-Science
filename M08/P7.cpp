#include<iostream>
using namespace std;
int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i++) {
        if (i % 3 == 0 and i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << sum << "\n\n";
}