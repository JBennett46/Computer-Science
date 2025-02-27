#include<iostream>
using namespace std;
int main() {
    string s;
    cout << "\nEnter a string of text: \n";
    getline(cin, s);
    string word = "", result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else {
            result = word + " " + result;
            word = "";
        }
    }
    result = word + " " + result;
    cout << "\nBackwards: " << result << endl;
}