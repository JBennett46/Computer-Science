#include<iostream>
#include<fstream>
using namespace std;

string getPalindrome(string s) {
    string subStr;
    for (int i = 0; i < s.length() - 1; i++) {
        subStr = to_string(s[i]);
        for (int j = i + 1; j < s.length(); i++) {
            if (s[i] != s[j]) {
                subStr += s[j];
                for(int i = 0, j = subStr.length() - 1; i < j; i++, j--) {
                    if (subStr[i] != subStr[j]) { 
                        bool pal = false;
                        break;
                    } 
                }
            }
        }
    }
    return subStr;
}

int main() {
    bool pal = true;
    ifstream input("P13-in.txt");
    ofstream output("P13-out.txt");
    string s, subStr;
    input >> s;
    string pals = getPalindrome(s);
    if (pal = true) {
        output << subStr + " ";
    }

}