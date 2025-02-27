#include<iostream>
using namespace std;

int main() {
    int count;
    cout << "\nEnter a whole number: ";
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        for (int o = 1; o <= i; o++)
        {
            cout << o << " ";
        }
        cout << "\n";
    }
}