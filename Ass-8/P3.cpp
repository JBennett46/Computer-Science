#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream input("P3-in.txt");
    ofstream output("P3-out.txt");
    string line;
    int wordCount = 0;
    while(getline(input, line)) {
        wordCount = 0;
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == ' ') {
                wordCount++;
            }
            if ((line[i] == 'A' or line[i] == 'a') and (line[i-1] == ' ' or i == 0))
            {
                output << wordCount + 1 <<endl;
                break;
            }
            
        }
    }
}