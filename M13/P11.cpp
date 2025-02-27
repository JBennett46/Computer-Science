#include<iostream>
#include<fstream>
using namespace std;

string procStr(string s) {
    string outs = "";
    for(int i = 0; i < s.length(); i++) {
        bool foundSmaller = false;
        for (int j = i+1; j < s.length(); j++)
        {
            if (s[i] > s[j])
            {
                foundSmaller = true;
                break;
            }
        }
        if (!foundSmaller) {
            outs += s[i];
        }
    }
    return outs;
}

int main() {
    ifstream input("p11-in.txt");
    ofstream output("p11-out.txt");
    while(!input.eof()) {
        string s;
        input >> s;
        string outs = procStr(s);
        output << outs << endl;
    }
    input.close();
    output.close();
}