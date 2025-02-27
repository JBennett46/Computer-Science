#include<iostream>
using namespace std;
int main() {
    string s;
    cout << "\nEnter a sentence:\n";
    getline(cin, s);
    int i = 0;
    while (i < s.length()) {
        if (i == 0 or s[i -1] == ' ') {
            if (s[i] >= 'a' and s[i] <= 'z') {
                s[i] -= 32;
            }
        }
        i++;
    }
    cout << "\n" << s << "\n";
}