#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream source("source.txt");
    cout << "\nEnter 3 lines of text.\n";
    for (int i = 0; i < 3; i++)
    {
        string s;
        getline(cin, s);
        source << s <<endl;
    }
    source.close();
    ifstream source("source.txt");
    ofstream destination("destination.txt");
    while (!source.eof()) {
        string s1;
        getline(source, s1);
        destination << s1 <<endl;
    }
}