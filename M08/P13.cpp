#include<iostream>
using namespace std;
int main() {
    for (;;)
    {
        int choice;
        cout << "Enter an option\n====================\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Exit\n";
        cin >> choice;
        if (choice == 5) {
            break;
        }
        if (choice > 5 or choice < 1) {
            cout << "\nInvalid Operation Choice.\n";
        }
        
        double x, y;
        cout << "\nEnter 2 numbers: \n";
        cin >> x >> y;
        double result;
        char oper;
        switch(choice) {
            case 1: result = x + y; oper = '+'; break;
            case 2: result = x - y; oper = '-'; break;
            case 3: result = x * y; oper = 'x'; break;
            case 4: result = x / y; oper = '/'; break;
        }
        cout << "\n" << x << " " << oper << " " << y << " = " << result << "\n";
        
    }
    
}