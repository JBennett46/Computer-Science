#include<iostream>
#include<fstream>
using namespace std;

void readArray(int array[10], string fileName) {
    ifstream f(fileName);
    for (int i = 0; i < 10; i++) {
        f >> array[i];
    }
    f.close();
}

int main() {
    while (true) {
        int array[10], choice = -1;
        bool found = false;
        readArray(array, "P3.txt");
        cout << "\nEnter a number to search for:\n";
        cin >> choice;
        if (choice == 0) {
            break;
        } for (int i = 0; i < 10; i++) {
            if (choice == array[i]) {
                cout << "Number found at Array Slot " << i << "\n";
                found = true;
            }
        } if (!found) {
            cout << "Number not found in Array.\n";
        }
    }
    cout << "\nExiting. have a nice day\n";
    return 0;
}