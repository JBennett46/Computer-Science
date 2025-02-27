#include<iostream>
using namespace std;
int main() {
    double num = 0;
    int sum = 1;
    cout << "\nPlease Enter a number: ";
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        sum *= i;
    }
    cout << sum << "\n\n";
}