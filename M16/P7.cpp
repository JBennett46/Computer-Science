#include<iostream>
using namespace std;

string encryptMessage(string s) {
    string res;
    char temp;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            temp = s[i];
            if (s[i+1] != ' ') {
                res += s[i+1];
                res += temp;
            }
            else {
                res += s[i];
                res += s[i+1];
            }
            i++;
        }
    }
    return res;
}

int main() {
    string s;
    cout << "\nEnter a message to be encrypted (all lowercase): \n";
    getline (cin,s);
    cout << "\n" << encryptMessage(s) << "\n";
}