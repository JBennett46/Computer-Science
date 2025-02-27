#include<iostream>
using namespace std;
int main() {
    float Number1, Number2;
    cout << "\nEnter 2 numbers: \n\nNumber 1: ";
    cin >> Number1;
    cout << "Number 2: ";
    cin >> Number2;
    if (Number1 > Number2)
    {
        cout << "\n" << Number1 << " is the larger number.\n\n";
    }
    else if (Number1 < Number2)
    {
        cout << "\n" << Number2 << " is the larger number.\n\n";
    }
    else
    {
        cout << "\nThe two numbers are equal!\n\n";
    }
    
    
}