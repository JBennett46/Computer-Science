#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "\nEnter a string of text: \n";
    getline(cin, str);
    string strNew = str;
    for (int i = 0; i < str.length(); i++) {
        strNew[i] = str[str.length() - 1 - i];
    }
    cout << "\n" << strNew << "\n";
}