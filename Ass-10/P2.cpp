#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("P2.txt");
    int array[100], n = 0;
    while (file >> array[n]) {
        n++;
    }
    file.close();

    int majorityNum = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count > n / 2) {
            majorityNum = array[i];
            break; 
        }
    }
    if (majorityNum != -1) {
        cout << "Majority Element: " << majorityNum << endl;
    } else {
        cout << "No Majority Element" << endl;
    }
}
