#include<iostream>
using namespace std;
int main() {
    int sides;
    cout << "\nEnter the number of sides of the shape: ";
    cin >> sides;
    if (sides == 1)
    {
        cout << "\nYour shape is simply a line.\n\n";
    }
    if (sides == 2)
    {
        cout << "\nYour shape is 2 lines!\n\n";
    }
    if (sides == 3)
    {
        cout << "\nYour shape a Triangle.\n\n";
    }
    if (sides == 4)
    {
        cout << "\nYour shape a Quadrilateral.\n\n";
    }
    if (sides == 5)
    {
        cout << "\nYour shape a Pentagon.\n\n";
    }
    if (sides == 6)
    {
        cout << "\nYour shape a Hexagon.\n\n";
    }
    if (sides == 7)
    {
        cout << "\nYour shape a Heptagon.\n\n";
    }
    if (sides == 8)
    {
        cout << "\nYour shape a Octagon.\n\n";
    }
    if (sides == 9)
    {
        cout << "\nYour shape a Nonagon.\n\n";
    }
    if (sides == 10)
    {
        cout << "\nYour shape a Decagon.\n\n";
    }
    else {
        cout << "\nEither that isn't a shape or I dont know it...\n\n";
    }
}