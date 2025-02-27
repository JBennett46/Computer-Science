#include<iostream>
using namespace std;
int main() {
    int num, lastnum;
    bool ascend = true;
    cout << "\nEnter 5 numbers: \n";
    for (int i = 0; i < 5; i++) {
        cin >> num;
        if (i > 0) {
            if (num < lastnum) {
                ascend = false;
            }
        }
        lastnum = num;
    }
    if (ascend == true)
    {
        cout << "\nThe list is ascending.\n";
    }
    else {
        cout << "\nThe list is not ascending.\n";
    }
}