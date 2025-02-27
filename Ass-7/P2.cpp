#include<iostream>
using namespace std;
int main() {
    string s;
    int upCount = 0, lowCount = 0, digCount = 0, spaceCount = 0;
    cout << "\nEnter a string of text:\n";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ('A' <= s[i] and s[i] <= 'Z')
        {
            upCount++;
        }
        if ('a' <= s[i] and s[i] <= 'z')
        {
            lowCount++;
        }
        if ('9' >= s[i] and s[i] >= '0')
        {
            digCount++;
        }
        if (s[i] == ' ')
        {
            spaceCount++;
        }
    }
    cout << "\nUppercase: " << upCount << "\nLowercase: " << lowCount <<
        "\nDigits: " << digCount << "\nSpaces: " << spaceCount <<endl;
}