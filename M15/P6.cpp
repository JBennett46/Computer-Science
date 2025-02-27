#include<iostream>
#include<fstream>
using namespace std;

void readArray(int array1[2][3], int array2[2][3], string fileName) {
    ifstream f(fileName);
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            f >> array1[r][c];
        }
    }
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            f >> array2[r][c];
        }
    }
    f.close();
}

void sumOfArrays(int array1[2][3], int array2[2][3], int array3[2][3]) {
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            array3[r][c] = array1[r][c] + array2[r][c];
        }
    }
}

void printArraySums(int array3[2][3]) {
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << array3[r][c] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int array1[2][3], array2[2][3], array3[2][3];
    readArray(array1, array2, "P6.txt");
    sumOfArrays(array1, array2, array3);
    printArraySums(array3);
    cout << "\n";
    return 0;
}