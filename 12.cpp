// Write a program to implement Destructors
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string student_name;

public:
    Student()
    {
        student_name = "";
    }

    Student(string Name)
    {

        student_name = Name;
    }

    void displayName()
    {
        cout << "Name: " << student_name << endl;
    }
    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Student s("Ganesh");
    s.displayName();

    Student s1(s);
    s1.displayName();

    return 0;
}
