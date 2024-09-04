#include<iostream>
using namespace std;
int main() {
    int n;  //creating mem location "n"
    cin >> n;  //taking console input as the value of "n"
    cout << "n: " << n << endl;  //printing to the console the value that was just received and assigned to "n"
    int x;
    cin >> x;
    cout << "x: " << x << endl;
    int y;
    cin >> y;
    cout << "y: " << y << endl;
    int z;
    z = (n + x) * y;  //assigning the value of (n + x) * y to memory location z
    cout << "Result: " << z << endl;  //printing the "result" which is value z to the console
}