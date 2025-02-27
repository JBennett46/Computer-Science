#include<iostream>
using namespace std;
int main() {
    int num, divCount = 0;
    cout << "\nEnter a number:\n";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            divCount++;
        }
    }
    cout << (divCount == 1 ? "\nThe number is Prime.\n" : "\nThe number is not a Prime.\n");
}