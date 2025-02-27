#include<iostream>
using namespace std;

int main() {
    int charCount = 0, strLength;
    char charChoice;
    string str;
    cout << "\nEnter a string of text: \n";
    getline(cin, str);
    cout << "\nEnter a character to track: \n";
    cin >> charChoice;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == charChoice) {
            charCount++;
        }
    }
    cout << "\nYour character '" << charChoice << "' appears in the text " << charCount << " times.\n";
}