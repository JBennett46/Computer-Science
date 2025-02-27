#include<iostream>
using namespace std;
int main() {
    int div3 = 0, div5 = 0;
    cout << "\nEnter 20 numbers: \n";
    for (int i = 0; i < 20; i++)
    {
        int num;
        cin >> num;
        if (num % 3 == 0)
        {
            div3 += 1;
        }
        if (num % 5 == 0)
        {
            div5 += 1;
        }
    }
    cout << "\n" << div3 << " nums divisible by 3.\n" << div5 << " nums divisible by 5.\n";
    string result;
    result = (div3 > div5) ? "Divisible by 3" : "Divisible by 5";
    if (div3 == div5)
    {
        cout << "\nAn equal amount of your numbers were divisible by 3 and 5!\n";
    }
    else
    {
        cout << "\nMore numbers are " << result << ".\n";
    }
}