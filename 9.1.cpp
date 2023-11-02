// Write a program to implement constructors (default)
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string student_name;

public:
    Student()
    {
        student_name = "";
    }

    string setName(string name)
    {
        student_name = name;
    }

    void displayName()
    {
        cout << "Name: " << student_name << endl;
    }
};

int main()
{
    Student s;
    s.setName("Ganesh");
    s.displayName();

    return 0;
}