#include<iostream>
#include<fstream>
using namespace std;

void readArrays(int arrayA[10], int arrayB[10], string fileName) {
    ifstream f(fileName);
    for (int i = 0; i < 10; i++) {
        f >> arrayA[i];
    }
    for (int i = 0; i < 10; i++) {
        f >> arrayB[i];
    }
    f.close();
}

void mergeArrays(int arrayA[10], int arrayB[10], int mergedarray[20]) {
    int i = 0, j = 0, k = 0;
    while(i < 10 and j < 10) {
        if (arrayA[i] < arrayB[j]) {
            mergedarray[k++] = arrayA[i++];
        }
        else {
            mergedarray[k++] = arrayB[j++];
        }
    }
    while(i < 10) {
        mergedarray()
    }
}

void printArray(int mergedarray[20]) {
    for (int i = 0; i < 20; i++) {
        cout << mergedarray[i] << " ";
    }
}
int main() {
    int arrayA[10], arrayB[10], mergedarray[20];
    readArrays(arrayA, arrayB, "mergeArrays.txt");
    mergeArrays(arrayA, arrayB, mergedarray);
    printArray(mergedarray);
    cout << "\n";
    return 0;
}