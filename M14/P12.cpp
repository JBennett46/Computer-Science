#include<iostream>
#include<fstream>
using namespace std;

void readArray(int array[10], string fileName) {
    ifstream f(fileName);
    for (int i = 0; i < 10; i++) {
        f >> array[i];
    }
    f.close();
}
int writeToArray(int array[10], int newArray[10]) {
    int runCount = 0;
    for (int i = 0; i < 10; i++) {
        if (array[i] >= 2 and array[i] <= 6) {
            newArray[runCount] = array[i];
            runCount++;
        }
    }
    return runCount;
}
void printArray(int newArray[10], int runCount) {
    for (int i = 0; i < runCount; i++) {
        cout << newArray[i] << " ";
    }
}
int main() {
    int array[10], newArray[10];
    readArray(array, "P3.txt");
    int runCount = writeToArray(array, newArray);
    printArray(newArray, runCount);
    cout << "\n";
    return 0;
}