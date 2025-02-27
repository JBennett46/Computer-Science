#include<iostream>
using namespace std;
int main() {
    float x, y;
    cout << "\nEnter the Coordinates of a point to see what quadrant it is in.\nX: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    string Result;
    if (x == x and y == y) {
        if (x == 0 and y == 0) {
            Result = "at the origin";
        }
        else if (x > 0) {
            if (y > 0) {
                Result = "in quadrant 1";
            }
            else {
                Result = "in quadrant 4";
            }
        }
        else if (x < 0) {
            if (y > 0) {
                Result = "in quadrant 2";
            }
            else {
                Result = "in quadrant 3";
            }
        }
        cout << "\nYour point is " << Result << ".\n\n";
    }
    else {
        cout << "\nThose are not valid coordinates.\n\n";
    }
}