#include<iostream>
using namespace std;
int main() {
    string s;
    int vowelCount = 0;
    cout << "\nEnter some text:\n";
    getline(cin,s);
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') {
            vowelCount++;
        }
        i++;
    }
    cout << "\nVowel Count = " << vowelCount << "\n";
}