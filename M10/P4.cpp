#include<iostream>
using namespace std;
int main() {
    int i = 0, sum = 0;
    while (i < 1000)
    {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    cout << "\nSum of odd numbers to 1000 is: " << sum << "\n";
}