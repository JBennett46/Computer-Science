#include<iostream>
using namespace std;
int main() {
    float Price, Total;
    cout << "\nEnter the initial price to see its Total with Tax (9%)\n\nPrice: ";
    cin >> Price;
    Total = Price * 1.09;
    cout << "\nTotal: $" << Total << "\n\n" << endl;
}