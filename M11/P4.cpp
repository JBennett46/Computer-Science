#include<iostream>
using namespace std;

double calculateArea(double x, double y) {
    return x * y;
}
int main() {
    double x, y;
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter the length and width of a rectangle.\n";
        cout << "\nLength: ";
        cin >> x;
        cout << "Width: ";
        cin >> y;
        cout << "\nArea = " << calculateArea(x, y) << "\n=============================";
    }
    cout << "\n";
}