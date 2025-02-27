#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream input("P3.txt");
    int array[10];
    int revArray[10];
    for (int i = 0; i < 10; i++) {
        input >> array[i];
    }
    for (int j = 9; j >= 0; j--) {
        array[j] >> revArray[9-j];
    }
    for (int r = 0; r < 10; r++) {
        cout << revArray[r] << " ";
    }
    cout << "\n";
    return 0;
}