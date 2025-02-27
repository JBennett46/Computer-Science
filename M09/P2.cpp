#include<iostream>
using namespace std;

int main() {
    char charFind, charReplace;
    string str;
    cout << "\nEnter a string of text: \n";
    getline(cin, str);
    cout << "Enter a character to find: \n";
    cin >> charFind;
    cout << "Enter a character to replace: \n";
    cin >> charReplace;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == charFind) {
            str[i] = charReplace;
        }
    }
    cout << "\n" << str << "\n";
}