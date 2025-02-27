#include<iostream>
using namespace std;

int wordCheck(string text, string word) {
    int TrueorFalse = 0;
    string tempWord;
    for (int i = 0; i < text.length(); i++)
    {
        while(text[i] != ' ') {
            tempWord += text[i];
            i++;
            if (text[i] == ' ') {
                break;
            }
        }
        if (word == tempWord) {
            TrueorFalse = 1;
            break;
        }
        else {
            tempWord = "";
        }
    }
    return TrueorFalse;

}

int main() {
    string word, text;
    cout << "\nEnter some text: \n";
    getline(cin, text);
    cout << "\nEnter a word to find in the text: \n";
    cin >> word;
    int isPresent = wordCheck(word, text);
    if (isPresent > 0) {
        cout << "\nWord found\n";
    }
    else {
        cout << "\nWord not found\n";
    }
    
    
}