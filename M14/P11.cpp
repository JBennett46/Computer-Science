#include<iostream>
#include<fstream>
using namespace std;

void readArray(int Array1[5], int Array2[5], string fileName) {
    ifstream f(fileName);
    for (int i = 0; i < 5; i++) {
        f >> Array1[i];
    }
    for (int i = 0; i < 5; i++) {
        f >> Array2[i];
    }
    f.close();
}
void appendArrays(int Array1[5], int Array2[5], int Array3[10]) {
    
    for (int i = 0; i < 5; i++) {
        Array3[i] = Array1[i];
    }
    for (int i = 0; i < 5; i++) {
        Array3[i + 5] = Array2[i];
    }
}
void printArray(int Array3[10]) {
    for (int i = 0; i < 10; i++) {
        cout << Array3[i] << " ";
    }
}

int main() {
    int Array1[5], Array2[5], Array3[10];
    readArray(Array1, Array2, "P11.txt");
    appendArrays(Array1, Array2, Array3);
    printArray(Array3);
    cout << "\n";
}