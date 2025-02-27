#include<iostream>
using namespace std;
int main() {
    string str;
    int words = 0;
    cout << "\nEnter a string of text:\n";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' and str[i - 1] != ' ')
        {
            words++;
        }
    }
    if (str[str.length() - 1] != ' ')
    {
        words++;
    }
    cout << "\nWord count = " << words << "\n";
}