#include <iostream>
#include <fstream>
using namespace std;

string Abbrev(string line) {
    string abbreviation = "";
    for (char ch : line) {
        if (ch >= 'A' and ch <= 'Z') {
            abbreviation += ch;
        }
    }
    return abbreviation;
}

int main() {
    ifstream input("P2-in.txt");
    ofstream output("P2-out.txt");
    string line;
    while (!input.eof()) {
        getline(input, line);
        string abbreviation = Abbrev(line);
        output << abbreviation << "\n";
    }

    input.close();
    output.close();
}
