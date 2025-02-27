#include<iostream>
using namespace std;
int main() {
    int x;  //asking c++ to create a memory location from RAM and name it "x"
            //we are storing a whole number in x
    x = 10; // we ask it to store value of 10 in memory location "x"
    int y;  //same thing but location named "y"
            //not storing anything in that location
            //the value in "y" will be whatever was stored in there from the past, called a garbage value because it's meaningless to us
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}