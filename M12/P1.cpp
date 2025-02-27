#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream input("input.txt");
    while (!input.eof()) {
        string s;
        getline(input, s);
        cout << s <<endl;
    }
}