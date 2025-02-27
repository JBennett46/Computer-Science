#include<iostream>
#include<fstream>
using namespace std;

void readArray(int array[3][4], string fileName) {
    ifstream f(fileName);
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            f >> array[r][c];
        }
    }
    f.close();
}

void printArrayMaxRowSum(int array[3][4]) {
    int curMax, rowIndex;
    for (int r = 0; r < 3; r++) {
        int sum = 0;
        for (int c = 0; c < 4; c++) {
            sum += array[r][c];
        }
        if (sum > curMax) {
            curMax = sum;
        }
    }
    cout << "Max Row Sum = " << curMax << "\n";
}
int main() {
    int array[3][4];
    readArray(array, "P5.txt");
    printArrayMaxRowSum(array);
    cout << "\n";
    return 0;
}