#include<iostream>
#include<fstream>
using namespace std;

void readArray(int array1[2][3], int array2[3][4], string fileName) {
    ifstream f(fileName);
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            f >> array1[r][c];
        }
    }
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            f >> array2[r][c];
        }
    }
    f.close();
}

void productsOfArrays(int array1[2][3], int array2[3][4], int array3[2][4], int r, int c, int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += array1[r][i] * array2[i][c];
    }
}

void printArrayProducts(int array3[2][4]) {
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 4; c++) {
            cout << array3[r][c] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int array1[2][3], array2[3][4], array3[2][4];
    readArray(array1, array2, "P7.txt");
    for (int i = 0; i < 2; i++) {
        for (int j =0; j < 4; j++) {
            productsOfArrays(array1, array2, array3, i, j, 3);
        }
    }
    printArrayProducts(array3);
    cout << "\n";
    return 0;
}