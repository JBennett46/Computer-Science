#include<iostream>
#include<fstream>
using namespace std;

void readArray(int array[4][5], string fileName) {
    ifstream f(fileName);
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 5; c++) {
            f >> array[r][c];
        }
    }
    f.close();
}

void printArrayColumnSums(int array[4][5]) {
    for (int r = 0; r < 5; r++) {
        int sum = 0;
        for (int c = 0; c < 4; c++) {
            sum += array[c][r];
        }
        cout << "Sum of Column " << r << ": " << sum << "\n";
    }
}
int main() {
    int array[4][5];
    readArray(array, "P3.txt");
    printArrayColumnSums(array);
    cout << "\n";
    return 0;
}