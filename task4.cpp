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
    Student s1, s2;

    cout << "Enter details of first student:" << endl;

    cout << "Enter name: ";
    cin >> s1.name;

    cout << "Enter roll number: ";
    cin >> s1.roll;

    cout << "Enter GPA: ";
    cin >> s1.gpa;

    cout << "\nEnter details of second student:" << endl;

    cout << "Enter name: ";
    cin >> s2.name;

    cout << "Enter roll number: ";
    cin >> s2.roll;

    cout << "Enter GPA: ";
    cin >> s2.gpa;

    if (s1.gpa > s2.gpa)
    {
        cout << "\nStudent with higher GPA:" << endl;
        cout << "Name: " << s1.name << endl;
        cout << "Roll Number: " << s1.roll << endl;
        cout << "GPA: " << s1.gpa << endl;
    }
    else if (s2.gpa > s1.gpa)
    {
        cout << "\nStudent with higher GPA:" << endl;
        cout << "Name: " << s2.name << endl;
        cout << "Roll Number: " << s2.roll << endl;
        cout << "GPA: " << s2.gpa << endl;
    }
    else
    {
        cout << "\nBoth students have equal GPA" << endl;
    }

    return 0;
}
