#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "\nEnter a string of text: \n";
    getline(cin, str);
    string strNew = str;
    for (int i = (str.length() / 2); i < str.length(); i++) {
        strNew[i] = str[str.length() - 1 - i];
    }
    cout << (str == strNew ? "\nIt is a palindrome.\n" : "\nIt is not a palindrome.\n") <<endl;
}