#include<iostream>
using namespace std;
int main() {
    int sum = 0;
    cout << "\nEnter 5 numbers: \n";
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        sum += (num > 0) ? num : 0;
    }
    cout << "\nSum of the positive numbers = " << sum << "\n";
}