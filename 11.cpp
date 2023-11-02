// Write a program to implement deep copy
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string student_name;
    int *rollno;

public:
    Student()
    {
        rollno = new int;
        student_name = "";
    }

    Student(string Name, int rollnum)
    {
        rollno = new int(rollnum);
        student_name = Name;
    }

    Student(Student &t)
    {
        rollno = new int;
        *rollno = *(t.rollno);
        student_name = t.student_name;
    }

    void displayName()
    {
        cout << "Name: " << student_name << " Roll Number: " << *rollno << endl;
    }
};

int main()
{
    Student s("Ganesh", 42);

    Student s1(s); // Using the copy constructor
    s1.displayName();

    return 0;
}
