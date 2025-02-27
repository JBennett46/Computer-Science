#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ofstream file("input.txt");
    string s, s1;
    cout << "\nEnter a line to be written to the file:\n";
    getline(cin, s);
    file << s;
    file.close();
    cout << "\nWould you like to view the file? Y/N\n";
    char a;
    cin >> a;
    if (a == 'Y' or a == 'y')
    {
        ifstream("input.txt");
        // getline(file, s1);  #Broken Line for some reason
        cout << "\n" << s1 <<endl;
    }
    else
    {
        cout << "\nEnding. Have a nice day.\n";
    }
}
