#include<iostream>
using namespace std;

bool Palindrome(string s1) {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s1[s1.length() - 1 - i]) {
                return false;
            }
        }
        return true;
    }

int main() {
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter a string: \n";
        string s, s1;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                s1 += s[i];
            }
        }
        if (Palindrome(s1)) {
            cout << "\nYes this is a Palindrome.\n";
        }
        else {
            cout << "\nNo this is not a Palindrome.\n";
        }
    }
}