#include<iostream>
using namespace std;

int main() {
    int n, m, temp;
    cout << "\nEnter the rows: ";
    cin >> n;
    cout << "\nEnter the columns: ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (m > 2) {
            temp = m / 2;
        }
        for (int i = 0; i < temp; i++)
        {
            cout << "X ";
            if (m > 2)
            {
                cout << "O ";
            }
        }
        cout << "\n";
    }
}