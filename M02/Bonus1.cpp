#include<iostream>
using namespace std;
int main() {
    double number, newestnumber;
    cout << "Enter a number with a decimal: ";
    cin >> number;
    int newnumber = number;
    newestnumber = number - newnumber;
    cout << "\n" << newestnumber << "\n\n";
}