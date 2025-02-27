#include<iostream>
using namespace std;

double CalculateSum(double x, double y) {
    return x + y;
}
int main() {
    double x, y;
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter 2 numbers to be added: \n";
        cin >> x >> y;
        cout << "\nSum = " << CalculateSum(x, y) << "\n=============================";
    }
    cout << "\n";
}