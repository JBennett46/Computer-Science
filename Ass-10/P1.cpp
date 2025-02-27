#include<iostream>
#include<fstream>
using namespace std;

void readArray(int arrayInput[3][3], string fileName) {
    ifstream f(fileName);
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            f >> arrayInput[r][c];
        }
    }
    f.close();
}

void transposeArrayIn(int arrayInput[3][3], int arrayOutput[3][3]) {
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            arrayOutput[c][r] = arrayInput[r][c];
        }
    }
}

void printArrayOut(int arrayOutput[3][3]) {
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << arrayOutput[r][c] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int arrayInput[3][3], arrayOutput[3][3];
    readArray(arrayInput, "P1.txt");
    transposeArrayIn(arrayInput, arrayOutput);
    printArrayOut(arrayOutput);
    cout << "\n";
}