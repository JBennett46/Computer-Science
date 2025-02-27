#include<iostream>
using namespace std;

float CtoF(float temp) {
    return ((temp * (9.0 / 5.0)) + 32.0);
}
float FtoC(float temp) {
    return ((temp - 32.0) * (5.0 / 9.0));
}

int main() {
    float temp;
    string type;
    cout << "\nEnter a temperature: ";
    cin >> temp;
    cout << "\nEnter the type (Fahrenheit or Celsius): ";
    cin >> type;
    if (type[0] == 'f' or type[0] == 'F') {
        cout << "\n" << temp << " degrees Fahrenheit = " << FtoC(temp) << " degrees Celsius.\n";
    }
    else if (type[0] == 'c' or type[0] == 'C') {
        cout << "\n" << temp << " degrees Celsius = " << CtoF(temp) << " degrees Fahrenheit.\n";
    }
    else {
        cout << "\nNot a valid temperature type!\n";
    }

}