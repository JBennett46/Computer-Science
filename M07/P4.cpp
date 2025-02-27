#include<iostream>
using namespace std;
int main() {
    string text;
    cout << "\nPlease enter any text: ";
    getline (cin, text);
    int(length) = text.length();
    cout << "Your string of text is " << length << " characters long.\n\n";
}