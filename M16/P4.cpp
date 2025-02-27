#include<iostream>
using namespace std;

string encryptMessage(string s, int key) {
    string res;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            if (s[i] + key > 'z') {
                char ch = ('a'-1 + ((s[i]+key) % 'z'));
                res += ch;
            }
            else {
                char ch = s[i] + key;
                res += ch;
            }
        }
        else {
            res += s[i];
        }
    }
    return res;
}

int main() {
    string s;
    int encryptKey;
    cout << "\nEnter a message to be encrypted (all lowercase): \n";
    getline (cin,s);
    cout << "\nEnter the encryption key (whole number): ";
    cin >> encryptKey;
    cout << "\n" << encryptMessage(s, encryptKey) << "\n";
}