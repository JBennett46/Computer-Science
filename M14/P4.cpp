#include<iostream>
#include<fstream>
using namespace std;



int main() {
    ifstream input("P3.txt");
    int numbers[10];
    int curHigh = 0, last = 0;
    for (int i = 0; i < 10; i++) {
        input >> numbers[i];
    }
    for (int r = 0; r < 10; r++) {
        if (numbers[r] > curHigh) {
            last = curHigh;
            curHigh = numbers[r];
        }
        if (numbers[r] > last and numbers[r] < curHigh) {
        last = numbers[r];
        }
    }
    cout << last << "\n";
}