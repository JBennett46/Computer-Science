#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream output("output.txt");
    cout << "\nEnter 5 lines of text (End a line with [Enter] key).\n";
    for (int i = 0; i < 5; i++)
    {
        string s;
        getline(cin, s);
        output << s <<endl;
    }
    output.close();
}