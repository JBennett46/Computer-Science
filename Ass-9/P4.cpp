#include<iostream>
using namespace std;

int main() {
    cout << "\nEnter 2 first names separated by a space: \n";
    string names = "", name1 = "", name2 = "";
    getline(cin, names);
    for (int i = 0; i < names.length(); i++) {
        while(names[i] != ' ') {
            name1 += names[i];
            i++;
        }
        i++;
        while(names[i] != ' ') {
            name2 += names[i];
            i++;
            if (names.length() == i) {
                break;
            }
        }
    }
    if (name1 < name2) {
        cout << name1 <<endl;
    }
    else if (name2 < name1) {
        cout << name2 <<endl;
    }
    if (name1 == name2) {
        cout << "They are the same name\n";
    }

}