#include<iostream>
using namespace std;

bool checkNumber(string s) {
    bool isValid = true;
    int numCount = 0;
    if (s[0] != '+') {
        cout << "No country code detected. (Make sure you are adding a '+' sign before country code).\n";
        isValid = false;
    }
    for (int i = 1; i < s.length(); i++) {
        if (!isdigit(s[i]))
        {
            if (s[i] != '(') {
                isValid = false;
                continue;
            }
            else {
                numCount = i;
            }
            if (s[i] != ')' or i - numCount != 3) {
                isValid = false;
                continue;
            }
            else {
                numCount = i;
            }
            if (s[i] != '-' or i - numCount != 3) {
                isValid = false;
                continue;
            }
        }
        
    }
    if (!isValid) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    string s;
    cout << "Enter your phone number (including country code): ";
    getline (cin,s);
    if (checkNumber(s)) {
        cout << "Valid number, thank you.\n";
    }
    else {
        cout << "Invalid Number, Please try again (make sure to include paranthesis).\n";
    }
}