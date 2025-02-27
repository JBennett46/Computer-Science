#include<iostream>
using namespace std;
int main() {
    int sum = 0;
    cout << "\nEnter 6 numbers: \n";
    for (int i = 0; i < 6; i++)
    {
        int num;
        cin >> num;
        num = (num < 0) ? -num : num;
        sum += num;
    }
    cout << "\nSum of absolute value of nums = " << sum << "\n";
}