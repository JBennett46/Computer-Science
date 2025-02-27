#include<iostream>
using namespace std;
int main() {
    string s, word = "", longestWord = "";
    cout << "\nEnter a string of words:\n";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            if (word.length() > longestWord.length()) {
                longestWord = word;
            }
            word = "";
        }
        else
        {
            word += s[i];
        }
        if (word.length() > longestWord.length()) {
                longestWord = word;
        }
    }
    cout << "\nThe longest word is " << longestWord << " with a length of " << longestWord.length() << ".\n";
}