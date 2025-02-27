#include<iostream>
using namespace std;
int main() {
    float Units, PremUnits, Cost;
    cout << "Enter the number of electricity 'units' you have used.\n\nUnits: ";
    cin >> Units;
    if (Units <= 100.0) {
        Cost = Units * 0.12;
        cout << "\nTotal cost: $" << Cost << "\n\n";
    }
    else if (Units >= 100.0) {
        PremUnits = Units - 100;
        Cost = (Units * 0.12) + (PremUnits * 0.15);
        cout << "\nTotal Cost: $" << Cost << "\n\n";        
    }
}