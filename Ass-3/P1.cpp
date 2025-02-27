#include<iostream>
using namespace std;
int main() {
    double Base, Height, Area;
    cout << "\nEnter the dimensions of a Triangle (cm) to calculate its Area (cm\xc2\xb2).\n\nBase: ";
    cin >> Base;
    cout << "\nHeight: ";
    cin >> Height;
    Area = Base*Height / 2;
    cout << "\nArea: " << Area << " cm\xc2\xb2\n\n"; 
}