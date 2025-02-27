#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input("P4-in.txt");
    ofstream output("P4-out.txt");
    string line;
    while (!input.eof()) {
        getline(input, line);
        string lastWord = "";
        for (int i = line.length() - 1; i >= 0; i--) {
            if (line[i] != ' ') {
                break;
            }
        }
        for (int i = line.length() - 1; i >= 0; i--) {
            if (line[i] == ' ') { 
                break;
            }
            lastWord = line[i] + lastWord;
        }
        string reversedLastWord = "";
        for (int j = lastWord.length() - 1; j >= 0; j--) {
            reversedLastWord += lastWord[j];
        }
        output << reversedLastWord << endl;
    }

    input.close();
    output.close();
}
