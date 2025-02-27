#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream words("words.txt");
    int wordCount = 0;
    while (!words.eof()) {
        string s;
        getline(words, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' and s[i - 1] != ' ') {
                wordCount++;
            }
            if (s[i] != ' ' and i == 0) {
                wordCount++;
            }
        }
    }
    cout << "There are " << wordCount << " words of text in the file.\n\n";
}
