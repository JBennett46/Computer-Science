#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int gradeCount = 0;

string Avg(string s) {
    float sum = 0, average = 0;
    string temp;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i])) {
            temp += s[i];
        }
        else if (s[i] == ' ') {
            sum += stoi(temp);
            gradeCount++;
            temp = "";
        }
        else if (i == s.length() and isdigit(s[i])) {
            sum += stoi(temp);
            gradeCount++;
            temp = "";
        }
    }
    average = sum / gradeCount;
    return to_string(average);
}    

int main() {
    ifstream input("P9-in.txt");
    ofstream output("P9-out.txt");
    int Student = 1;
    while(!input.eof()) {
        string s;
        getline(input, s);
        Avg(s);
        output << "Student #" << Student << "   Avg Grade: " << Avg << "   Assignments: " << gradeCount << "\n";
        Student++;
    }
    input.close();
    output.close();
}