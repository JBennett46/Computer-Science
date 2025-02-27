#include<iostream>
using namespace std;
int main() {
    float Number;
    cout << "\nEnter a number: ";
    cin >> Number;
    if (Number > 0)
    {
        cout << "\nYour number (" << Number << ") is a positive number.\n\n";
    }
    if (Number == 0)
    {
        cout << "\nYour number is zero. Neither a positive or a negative. Or both. Who knows...\n\n";
    }
    if (Number < 0)
    {
        cout << "\nYour number is a negative number.\n\n";
    }
}