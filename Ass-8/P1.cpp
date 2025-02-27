#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream input("P1-in.txt");
    ofstream output("P1-out.txt");
    string line;

    while (getline(input, line)) {
        string firstWord = "", secondWord = "";
        int wordCount = 0; 

        for (int i = 0; i < line.length(); i++) {
            char c = line[i];

            if (c == ' ') {
                wordCount++;
                if (wordCount > 1) {
                    break;
                }
            } else {
                if (wordCount == 0) {
                    firstWord += c;
                } else if (wordCount == 1) {
                    secondWord += '*';
                }
            }
        ]
        output << firstWord;
        if (secondWord.length() > 0) {
            output << " " << secondWord;
        }
        output << endl;
    }

    input.close();
    output.close();
}