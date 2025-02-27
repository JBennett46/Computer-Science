#include<iostream>
using namespace std;
int main() {
    string s, smallName = "", currentName = "";
    cout << "\nEnter a list of first names separated by spaces: \n";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ') {
            currentName += s[i];
        }
        else {
            if (smallName == "" or currentName[0] < smallName[0]) {
                smallName = currentName;
            }
            
            currentName = "";
        }
    }
    cout << "\nSmallest name is: " << smallName <<endl;
}