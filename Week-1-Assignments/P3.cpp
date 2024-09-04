#include<iostream>
using namespace std;
int main() {
    int x;  //getting mem location named "x"
    cin >> x;  //receiving a value from the console input and storing it in "x"
    cout << "x: " << x << endl;  //printing to the console the value that was just stored in "x"
    int y;
    cin >> y;
    cout << "y: " << y << endl;
    int z;  //creating a mem location "z"
    z = x + y;  //assigning the value of "x" plus the value of "y" and assigning that sum to memory location "z"
    cout << "z: " << z << endl;  //output the value of memory location "z" to the console
}