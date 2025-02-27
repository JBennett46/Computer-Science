#include<iostream>
#include<fstream>
using namespace std;

bool compare(string sort1, string sort2) {
    if (sort1 == sort2) {
        return true;

    }
}

string getWord(string s) {
    for (int i = 0; i < s.length(); i++) {
        string w1, w2;
        
    }
}

void sort(string s) {
    for (int i = 0; i < s.length(); i++)
    {
        string w1, w2;
        while(s[i] != ' ')
        {
            w1 += s[i];
        }
        
        
    }
    
}

int main() {
    bool Anagram = false;
    ifstream input("P12-in.txt");
    while(!input.eof()) {
        string s;
        input >> s;
        bool Anagram = check(s);
    }
    
}