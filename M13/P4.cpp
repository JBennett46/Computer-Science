#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream output("P4-out.txt");
    cout << "\nEnter a number: ";
    float num;
    cin >> num;
    for (int i = 0; i <= 10; i++)
    {
        output << num << " x " << i << " = " << num * i <<endl;
    }
    output.close();
}