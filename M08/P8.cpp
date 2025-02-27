#include<iostream>
using namespace std;
int main() {
    int limit = 0;
    cout << "\nPlease Enter a number: ";
    cin >> limit;
    for (int i = 2; i <= limit; i+=2)
    {
        cout << i << " ";
    }
    cout << "\n";
}