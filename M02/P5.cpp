#include<iostream>
using namespace std;
int main() {
    double Radius, Volume;
    cout << "\nEnter the Radius (cm) of a sphere to calculate its Volume (cm\xc2\xb3).\n\nRadius: ";
    cin >> Radius;
    Volume = 4.0 / 3 * Radius * Radius * Radius * 3.1415;
    cout << "\nVolume: " << Volume << " cm\xc2\xb3\n" << endl;
}