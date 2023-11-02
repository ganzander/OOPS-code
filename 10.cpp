// Write a program to implement shallow copy
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string student_name;
    int rollno;

public:
    Student()
    {
        rollno = 0;
        student_name = "";
    }

    Student(string Name, int rollnum)
    {
        rollno = rollnum;
        student_name = Name;
    }

    Student(const Student &t)
    {

        rollno = (t.rollno);
        student_name = t.student_name;
    }

    void displayName()
    {
        cout << "Name: " << student_name << " and Roll Number: " << rollno << endl;
    }
};

int main()
{
    Student s("Ganesh", 42);

    Student s1(s);
    s1.displayName();

    return 0;
}
