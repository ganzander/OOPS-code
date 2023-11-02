// Write a program to implement constructors (default)
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

    void displayName()
    {
        cout << "Name: " << student_name << endl;
    }
};

int main()
{
    Student s("Ganesh");
    s.displayName();
    return 0;
}