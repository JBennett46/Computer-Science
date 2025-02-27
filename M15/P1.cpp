#include<iostream>
using namespace std;

float calculateSum(float array[5]) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += array[i];
    }
    return sum;
}

float calculateAverage(float array[5]) {
    float average = 0;
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += array[i];
    }
    average = sum / 5;
    return average;
}

int main() {
    float array[5];
    cout << "\nEnter 5 numbers: \n";
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    float sum = calculateSum(array);
    float average = calculateAverage(array);
    cout << "\nSum = " << sum << "\n" << "Average = " << average << "\n";
}