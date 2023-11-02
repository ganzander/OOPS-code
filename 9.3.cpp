
// Write a program to implement constructors (copy)
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string student_name;

public:
    Student(string Name)
    {
        student_name = Name;
    }
    Student(Student &t)
    {
        (student_name = t.student_name);
    }

    void displayName()
    {
        cout << "Name: " << student_name << endl;
    }
};

int main()
{
    Student s("Ganesh Mangla");
    Student s1(s);
    s1.displayName();
    return 0;
}