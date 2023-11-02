// Write a program to implement Friend Function

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
    void set(string Name)
    {
        student_name = Name;
    }
    string get()
    {
        return student_name;
    }
    friend void displayName(Student &temp);
};

void displayName(Student &temp)
{
    temp.student_name = ("lovanshu");
}

int main()
{
    Student s("Ganesh");
    displayName(s);
    cout << "Name: " << s.get() << endl;

    return 0;
}
