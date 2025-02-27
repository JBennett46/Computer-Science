#include<iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "\nPlease enter a number: ";
    cin >> num;
    for (int i = 0; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << "\n";
    }
    
}