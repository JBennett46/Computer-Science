#include<iostream>
using namespace std;
int main(){
    float Score;
    cout << "\nEnter your test score: ";
    cin >> Score;
    if (Score >= 90.0)
    {
        cout << "\nYou got an A on the test!\n\n";
    }
    else if (80.0 <= Score and Score < 90.0)
    {
        cout << "\nYou got a B on the test.\n\n";

    }
    else if (70.0 <= Score and Score < 80.0)
    {
        cout << "\nYou got a C on the test.\n\n";
    }    
    else if (60.0 <= Score and Score < 70.0)
    {
        cout << "\nYou got a D on the test.\n\n";
    }
    else if (0.0 <= Score and Score < 60.0)
    {
        cout << "\nYou got an F on the test. Failure.\n\n";
    }
    else {
        cout << "\nThat is not a valid test score.\n\n";
    }
}