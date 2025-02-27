#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "\nEnter a whole number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int o = 0; o < i; o++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}