#include<iostream>
using namespace std;
int main() {
    int Choice1;
    cout << "\nCalculation Choices\n===================\nOption 1: Addition\nOption 2: Subtraction\nOption 3: Multiplication\nOption 4: Division\n\nEnter a choice (1-4): ";
    cin >> Choice1;
    float num1, num2;
    switch (Choice1)
    {
    case 1:
        cout << "\nEnter 2 numbers to be added: \n";
        cin >> num1;
        cout << "+\n";
        cin >> num2;
        cout << "= " << num1 + num2 << "\n";
        break;
    case 2:
        cout << "\nEnter 2 numbers to be subtracted (First - Second): \n";
        cin >> num1;
        cout << "-\n";
        cin >> num2;
        cout << "= " << num1 - num2 << "\n";
        break;
    case 3:
        cout << "\nEnter 2 numbers to be multiplied: \n";
        cin >> num1;
        cout << "*\n";
        cin >> num2;
        cout << "= " << num1 * num2 << "\n";
        break;
    case 4:
        cout << "\nEnter 2 numbers to be divided (First / Second): \n";
        cin >> num1;
        cout << "/\n";
        cin >> num2;
        if (num1 == 0 or num2 == 0)
        {
            cout << "\nCannot divide with a zero.\n\n";
        }
        else {
            cout << "= " << num1 / num2 << "\n";
        }
        break;
    
    default:
        cout << "\nYou have entered an invalid choice.\n\n";
        break;
    }
}