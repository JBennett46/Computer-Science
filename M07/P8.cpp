#include<iostream>
using namespace std;
int main() {
    string text;
    cout << "\nEnter any text: ";
    getline (cin, text);
    text[0] = 's';
    text[text.length() - 1] = 's';
    if (text.length() % 2 == 0) {
        text[text.length() / 2] = 's';
        text[(text.length() / 2) - 1] = 's';
    }
    else {
        text[text.length() / 2] = 's';
    }
    cout << "\n" << text << "\n\n";
}