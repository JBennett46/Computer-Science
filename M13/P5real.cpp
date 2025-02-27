#include<iostream>
#include<fstream>
using namespace std;

string generateARow(int c, char ch) {
    string row = "";
    for (int i = 0; i < c; i++) {
        row += ch;
        row += " ";
        ch = (ch == 'X') ? 'O' : 'X';
    }
    
    return row + "\n";
}

int main() {
    ofstream output("P5.txt");
    int n, m;
    cout << "\nEnter the rows: ";
    cin >> n;
    cout << "\nEnter the columns: ";
    cin >> m;
    char ch = 'X';
    for (int i = 0; i < n; i++) {
        string s = generateARow(m, ch);
        ch = (ch == 'X') ? 'O' : 'X';
        output << s;
    }
    output.close();
}