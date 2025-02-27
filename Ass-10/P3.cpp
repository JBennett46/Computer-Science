#include<iostream>
using namespace std;

int main() {
    int array[100], n;
    cout << "Enter how many elements your Array will have (must not exceed 100):\n";
    cin >> n;
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += array[j];
            cout << "[";
            for (int k = i; k <= j; k++) {
                cout << array[k];
                if (k < j) {
                    cout << ", ";
                }
            }
            cout << "] = " << sum << endl;
        }
    }
    cout << "\n";
}