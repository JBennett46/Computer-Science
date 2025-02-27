#include<iostream>
using namespace std;

int main() {
    int numbers[7];
    int sumEven = 0, sumOdd = 0;
    cout << "\nPlease enter 7 numbers: \n";
    for (int i = 1; i <= 7; i++)
    {
        cout << "Number " << i << ": ";
        cin >> numbers[i - 1];
    }
    for (int r = 0; r < 7; r++){
        if (r % 2 == 0)
        {
            sumOdd += numbers[r];
        }
        else {
            sumEven += numbers[r];
        }

    }
    cout << "Sum of even array slots: " << sumEven << "\n" << "Sum of odd array slots: " << sumOdd <<endl;
}
