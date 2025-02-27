#include<iostream>
using namespace std;
int main() {
    float angle1, angle2, angle3;
    string classify;
    cout << "\nEnter three inside angles of a triangle.\n\nAngle 1: ";
    cin >> angle1;
    cout << "Angle 2: ";
    cin >> angle2;
    cout << "Angle 3: ";
    cin >> angle3;
    if (angle1 + angle2 + angle3 == 180)
    {
        if (angle1 == 90.0 or angle2 == 90.0 or angle3 == 90.0) {
            classify = " Right";
        }
        else if (angle1 > 90 or angle2 > 90 or angle3 > 90) {
            classify = "n Obtuse";
        }
        else if (angle1 < 90 and angle2 < 90 and angle3 < 90) {
            classify = "n Acute";
        }
        cout << "\nYour triangle is a" << classify << " Triangle.\n\n";
    }    
    else {
        cout << "\nThose are not valid angles for a triangle.\n\n";
    }
}