#include<iostream>
using namespace std;

int main() {
    float heights[5];
    cout << "\nPlease enter the heights (inches): \n";
    for (int i = 1; i < 6; i++)
    {
        cout << "Student " << i << ": ";
        cin >> heights[i - 1];
    }
    cout << "\nThank you. Would you like to see the entries? Y/N\n";
    char choice;
    cin >> choice;
    if (choice == 'Y' or choice == 'y')
    {
        for (int r = 0; r < 5; r++)
        {
            cout << "Student " << r + 1 << ": " << heights[r] << "\n";
        }
        
    }
}