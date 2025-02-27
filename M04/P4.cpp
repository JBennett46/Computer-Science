#include<iostream>
using namespace std;
int main() {
    float Number;
    cout << "\nEnter a number: ";
    cin >> Number;
    if (Number > 10)
    {
        cout << "\nYou chose " << Number << ", an amazing and strong number that is\nproudly larger than the number 10.\n\n";
    }
    else if (Number < 10)
    {
        cout << "\nYou chose " << Number << ", a weak and sad number, that is \nunfortunately smaller than 10.\n\n";
    }
    else
    {
        cout << "\nHmmmm, you chose " << Number << ", which happens to be an equal match\nfor the devious foe, number 10.\n\n";
    }
}