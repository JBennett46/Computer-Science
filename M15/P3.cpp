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

void printArrayRowSums(int array[4][5]) {
    for (int r = 0; r < 4; r++) {
        int sum = 0;
        for (int c = 0; c < 5; c++) {
            sum += array[r][c];
        }
        cout << "Sum of Row " << r << ": " << sum << "\n";
    }
}
int main() {
    int array[4][5];
    readArray(array, "P3.txt");
    printArrayRowSums(array);
    cout << "\n";
    return 0;
}