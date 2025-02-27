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

int main() {
    int array[10];
    readArray(array, "P3.txt");
    for (int i = 0; i <10; i++) {
        array[i] *= 2;
    }
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    return 0;
}