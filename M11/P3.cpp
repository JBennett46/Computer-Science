#include<iostream>
using namespace std;

void sayHi(string s) {
    cout << "\nHello, " << s << "!";
}

int main() {
    while (true) {
        cout << "\nPlease enter your name: ";
        string s;
        cin >> s;
        if (s == "end")
        {
            cout << "\nEnding the Hello Program.\n";
            break;
        }
        else {
            sayHi(s);
        }
        cout << "\n";
    }
    
}