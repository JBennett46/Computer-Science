#include<iostream>
using namespace std;
int main() {
    string s;
    char c;
    int charCount = 0;
    cout << "\nEnter a sentence:\n";
    getline(cin, s);
    cout << "\nEnter a character to track: ";
    cin >> c;
    c = (c > 'A' and c < 'Z') ? c + 32 : c;
    int i = 0;
    while (i < s.length()) {
        char c1 = s[i];
        c1 = (c1 > 'A' and c1 < 'Z') ? c1 + 32 : c1;
        if (c == c1) {
            charCount++;
        }
        i++;
    }

    cout << "\nYour character '" << c << "' appears " << charCount << " times.\n";
}