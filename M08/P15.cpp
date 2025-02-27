#include<iostream>
using namespace std;
int main() {
    float max;
    cout << "\nEnter 5 Numbers.\n";
    int loopCount = 1;
    for (int i = 0; i < 5; i++)
    {
        float num;
        cout << "Enter Number " << loopCount << ": ";
        cin >> num;
        if (i == 0) {
            max = num;
        }
        else if (num > max) {
            max = num;
        }
        loopCount++;
    }
    cout << "\nHighest number is " << max << ".\n";
    
}