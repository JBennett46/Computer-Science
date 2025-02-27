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
    while (bool Run = true) {
        int array[10], choice, foundCount = 0;
        bool found = false;
        readArray(array, "P3.txt");
        cout << "\nEnter a number to search for (Press CTRL+C to quit):\n";
        cin >> choice;
        for (int i = 0; i < 10; i++) {
            if (choice == array[i]) {
                found = true;
                foundCount++;
            }
        }
        if (found) {
            cout << "Found " << foundCount << " times.\n";
        }
        else if (!found) {
            cout << "Number not found in Array.\n";
        }
    }
    cout << "\nExiting. have a nice day\n";
    return 0;
}