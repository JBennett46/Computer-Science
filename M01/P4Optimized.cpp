#include<iostream>
using namespace std;
int main() {
    int n, x, y;  //creating mem location "n" and "x" and "y"
    cout << "Enter 3 Values, x, n, and y, to be calculated as (n + x) * y\n\n";
    cout << "n: ";  //asking the user to input a number for "n: " to make it easier to understand
    cin >> n;  //taking the user's input and assigning it as the integer
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "n: " << n << "  x: " << x << "  y: " << y << endl;  //printing to the console the values that were just received and assigned to the integers
    cout << "(" << n << " + " << x << ")" " * " << y << " =\n";  //Displaying the formula to the user in an easy to understand way
    int z = (n + x) * y;  //assigning the value of (n + x) * y to memory location z
    cout << "Result: " << z << endl;  //printing the "result" which is value z to the console
}