#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream input("P3.txt");
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        input >> numbers[i];
    }
    for (int r = 0; r < 10; r+=2) {
        if (numbers[r] > numbers[r+1]) {
            int temp = numbers[r];
            numbers[r] = numbers[r+1];
            numbers[r+1] = temp;
        }
    }
    for (int r = 0; r < 10; r++) {
        cout << numbers[r] << ", ";
    }
    cout << "\n";
}