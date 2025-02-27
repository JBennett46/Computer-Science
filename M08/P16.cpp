#include<iostream>
using namespace std;
int main() {
    cout << "\nEnter numbers: \n";
    int numCount = 0;
    for (;;)
    {
        float Num;
        cin >> Num;
        if (Num > 0)
        {
            numCount++;
        }
        else {
            cout << "\nNegative Number! You entered " << numCount << " positive numbers first.\n\n";
            break;
        }
    }
}