#include<iostream>
using namespace std;
int main() {
    string text;
    cout << "\nPlease enter any text: ";
    getline (cin, text);
    text[0] = 's';
    text[text.length() - 1] = 's';
    cout << text << "\n\n";
}