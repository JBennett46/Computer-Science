#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream input("P6.txt");
    int Array1[5], Array2[5];
    for (int i = 0; i < 5; i++) {
        input >> Array1[i];
    }
    for (int i = 0; i < 5; i++) {
        input >> Array2[i];
    }
    input.close();
    bool same = true;
    for (int i = 0; i < 5; i++) {
        int letterCount = 0;
        for (int j = 0; j < 5; j++, letterCount++) {
            if (Array1[i] == Array2[j]) {
                Array2[j] = -10000000;
                break;
            }
        } if (Array2[letterCount] != -10000000) {
            same = false;
        }
    }
    if (same) {
        cout << "They are the same\n";
    } else {
        cout << "not the same\n";
    }
}