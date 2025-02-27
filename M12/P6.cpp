#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream words("words.txt");
    int charCount = 0;
    while (!words.eof()) {
        string s;
        getline(words, s);
        charCount += s.length();
    }
    cout << "There are " << charCount << " characters in the file.\n\n";
}
