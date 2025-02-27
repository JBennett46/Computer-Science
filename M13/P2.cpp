#include<iostream>
#include<fstream>
using namespace std;

string reverseWord(string w) {
    string rw = "";
    int i = 0;
    while(i < w.length()) {
        rw = w[i++] + rw;
    }
    return rw;
}

int main() {
    ifstream input("P2-in.txt");
    ofstream output("P2-out.txt");
    while(!input.eof()) {
        string word;
        input >> word;
        string rev = reverseWord(word);
        output << rev << " ";
    }
    input.close();
    output.close();
}