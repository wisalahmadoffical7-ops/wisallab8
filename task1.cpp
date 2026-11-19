#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    float gpa;
};

int main()
{
    Student s1;

    cout << "Enter student name: ";
    cin >> s1.name;

    cout << "Enter roll number: ";
    cin >> s1.roll;

    cout << "Enter GPA: ";
    cin >> s1.gpa;

    cout << "\nStudent Information:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.roll << endl;
    cout << "GPA: " << s1.gpa << endl;

    return 0;
}
