#include<iostream>
using namespace std;

int main() {
    string str, strNew;
    cout << "\nEnter a string of text: \n";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            strNew += str[i];
        }
    }
    string strTest = strNew;
    for (int i = (strNew.length() / 2); i < strNew.length(); i++) {
        strTest[i] = strNew[strNew.length() - 1 - i];
    }
    cout << (strNew == strTest ? "\nIt is a palindrome.\n" : "\nIt is not a palindrome.\n") <<endl;
}