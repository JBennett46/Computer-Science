#include<iostream>
using namespace std;
int main() {
    string shape;
    string calculation;
    cout << "\nType a shape to calculate (Square, Triangle, or Circle): ";
    cin >> shape;
    cout << "\nWould you like to calculate the Perimeter or Area (type one): ";
    cin >> calculation;
    if (shape == "Square" or shape == "square")
    {
        float sideLength;
        cout << "\nEnter the length of one side of your square (cm): ";
        cin >> sideLength;
        float Result;
        (calculation == "area" or calculation == "Area") ? Result = sideLength * sideLength : Result = sideLength * 4;
        (calculation == "area" or calculation == "Area") ? cout << "\nThe area of your square is: " << Result << " cm\xc2\xb2\n\n" : cout << "\nThe perimeter of your square is: " << Result << " cm\n\n";
    }
    else if (shape == "Circle" or shape == "circle")
    {
        float sideLength;
        cout << "\nEnter the radius of your circle (cm): ";
        cin >> sideLength;
        float Result;
        (calculation == "area" or calculation == "Area") ? Result = sideLength * sideLength * 3.1415 : Result = sideLength * 3.1415 * 2;
        (calculation == "area" or calculation == "Area") ? cout << "\nThe area of your circle is: " << Result << " cm\xc2\xb2\n\n" : cout << "\nThe perimeter of your circle is: " << Result << " cm\n\n";
    }
    else if (shape == "Triangle" or shape == "triangle")
    {
        float base, height;
        if (calculation == "area" or calculation == "Area")
        {
            cout << "\nEnter the base of your triangle (cm): ";
            cin >> base;
            cout << "\nEnter the height of your triangle (cm): ";
            cin >> height;
            float Result;
            Result = base * height;
            cout << "\nThe area of your triangle is: " << Result << " cm\xc2\xb2\n\n";
        }
        else {
            cout << "\nEnter the 3 lengths of the sides of your triangle (cm):\n";
            float sideA, sideB, sideC;
            cin >> sideA >> sideB >> sideC;
            float Result;
            Result = sideA + sideB + sideC;
            cout << "\nThe perimeter of your triangle is: " << Result << " cm\n\n";
        }
        
    }
}