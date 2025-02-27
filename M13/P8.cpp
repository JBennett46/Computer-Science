#include<iostream>
using namespace std;

int main() {
    string s;
    cout << "\nEnter a 16-character string of text: ";
    getline(cin, s);
    for (int i = 0; i < 4; i++) {
        for (int o = 0; o < 4; o++) {
            cout << s[i * 4 + o] << " ";
        }
        cout << "\n";
    }
}