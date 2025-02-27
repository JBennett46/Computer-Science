#include<iostream>
using namespace std;
int main() {
    double Length, Width, Area;
    cout << "\nEnter the Length and Width (cm) of a square or rectangle to calculate the Area (cm\xc2\xb2).\n\nLength: ";
    cin >> Length;
    cout << "\nWidth: ";
    cin >> Width;
    Area = Length * Width;
    cout << "\nArea: " << Area << " cm\xc2\xb2\n\n";
}
