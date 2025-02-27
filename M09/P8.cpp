#include<iostream>
using namespace std;
int main() {
    string s, revWord, word = "", result = "";
    cout << "\nEnter some words separated by a space: \n";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            word = s[i] + word;
        }
        else
        {
            for (int a = 0; a < word.length(); a++)
            {
                result = word[word.length() - 1 - a];
                result += revWord;
            }
        }
    }
    cout << "\nResult: " << result << endl;
}