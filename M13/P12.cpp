#include<iostream>
#include<fstream>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    for (int i = 0; i < s1.length(); i++) {
        bool foundChar = false;
        for (int j = 0; j < s2.length(); j++) {
            if (s1[i] == s2[j]) {
                s2[j] = '*';
                foundChar = true;
                break;
            }
        }
        if (!foundChar) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream input("P12-in.txt");
    while(!input.eof()) {
        string str1, str2;
        input >> str1 >> str2;
        if (isAnagram(str1, str2)) {
            cout << str1 << " and " << str2 << " are Anagrams.\n";
        } else {
            cout << str1 << " and " << str2 << " are NOT Anagrams.\n";
        }
    }
}