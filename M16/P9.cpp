#include<iostream>
#include<cmath>
using namespace std;

int binary(string s) {
    int res = 0;
    for(int i = 0; i < s.length(); i++) {
        res += s[s.length() - i] * pow(2, i);
    }
    return res;
}

int main() {
    string s;
    cout << "\nEnter a binary number: ";
    cin >> s;
    cout << "\n" << binary(s) << "\n";
}