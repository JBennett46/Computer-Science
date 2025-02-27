#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream output("P3.txt");
    int j = 1;
    for (char ch = 'A'; ch <= 'E'; ch++) {
        for (int c = 0; c < (ch - 'A' + 1); c++) {
            output << ch << " ";
        }
        output <<endl;
    }
}