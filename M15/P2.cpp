#include<iostream>
#include<fstream>
using namespace std;

void readArray(int array[4][4], string fileName) {
    ifstream f(fileName);
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            f >> array[r][c];
        }
    }
    f.close();
}

void printArray(int array[4][4]) {
    for (int i = 0; i < 4; i++) {
        cout << array[i][i] << " ";
    }
}
int main() {
    int array[4][4];
    readArray(array, "P2.txt");
    printArray(array);
    cout << "\n";
    return 0;
}