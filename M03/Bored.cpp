#include<iostream>
#include<unistd.h>
#include<iomanip>
using namespace std;
int main() {
    float Height, Weight, BMI;
    cout << "\nWelcome to the BMI (Body Mass Index) Calculator!" << endl;
    sleep(1.5);
    cout << "Please enter your" << endl;
    sleep(0.7);
    cout << "\nHeight (in): ";
    cin >> Height;
    cout.flush();
    sleep(0.7);
    cout << "\nWeight (lbs): ";
    cin >> Weight;
    Height = Height * Height;
    BMI = (Weight / Height) * 703;
    cout << "\nYour BMI is: " << fixed << setprecision(2) << BMI << endl;
    sleep(2);
    cout << "\n...Calculating..." << endl;
    sleep(1);
    cout << "\n...Calculating..." << endl;
    sleep(1);
    cout << "\n...Calculating..." << endl;
    sleep(3);
    if (BMI < 18.5)
    {
        cout << "\nYour BMI indicates you are underweight.\n" << endl;
    }
    if (BMI > 25)
    {
        cout << "\nYour BMI indicates you are overweight.\n" << endl;
    }
    if (18.5 <= BMI && BMI <= 25)
    {
        cout << "\nYour BMI indicates that you are within a healthy weight range for your height!\n" << endl;
    }
}