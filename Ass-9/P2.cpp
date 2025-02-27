#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream output("P2.txt");
    cout << "\nEnter the number of rows: ";
    int count = 0;
    cin >> count;
    for (int r = 1; r <= count; r++) {
        for (int c = 1; c <= r; c++) {
            output << c << " ";
        }
        for (int j = r - 1; j >= 1; j--) {
            output << j << " ";
        }
        output << "\n";
    }
}