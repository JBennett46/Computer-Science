#include<iostream>
using namespace std;
int main() {
    int items;
    cout << "\nEnter the number of items: ";
    cin >> items;
    float sum = 0;
    int priceNum = 1;
    for (int i = items; i > 0; i--)
    {
        float price = 0;
        cout << "Enter Price " << priceNum << ": ";
        cin >> price;
        sum += price;
        priceNum++;
    }
    cout << "\nTotal price is $" << sum << "\n";
    
}