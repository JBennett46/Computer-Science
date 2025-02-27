#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream input("P3.txt");
    int numbers[10];
    int curHigh, sum = 0;
    for (int i = 0; i < 10; i++) {
        input >> numbers[i];
    }
    for (int r = 0; r < 10; r++) {
        if (numbers[r] > curHigh) {
            curHigh = numbers[r];
        }
        sum += numbers[r];
    }
    cout << sum - curHigh << "\n";
}