#include<iostream>
using namespace std;   
int main() {
    int Number;
    string Result1, Result2;
    cout << "\nEnter a whole number (Negative or Positive): ";
    cin >> Number;
    if (Number == 0) {
        cout << "\nYour number is zero.\n";
    }
    else {
        Result1 = (Number > 0) ? "Positive" : "Negative";
        Result2 = (Number % 2 == 0) ? "Even" : "Odd";
        cout << "\nYour number (" << Number << ") is " << Result1 << " and " << Result2 << ".\n\n";
    }
    
        
    
    
    
}