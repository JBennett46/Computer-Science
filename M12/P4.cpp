#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream lines("lines.txt");
    int lineCount = 0;
    while (!lines.eof()) {
        string s;
        getline(lines, s);
        lineCount++;
    }
    cout << "There are " << lineCount << " lines of text in the file.\n\n";
}
