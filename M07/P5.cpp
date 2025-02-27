#include<iostream>
using namespace std;
int main() {
    string text;
    cout << "\nPlease enter any text: ";
    getline (cin, text);
    int(last) = text.length() - 1;
    cout << "First char: " << text[0] << "\nSecond char: " << text[1] << "\nLast char: " << text[last] << "\n\n";
}