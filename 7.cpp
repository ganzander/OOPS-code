// Write a program to implement Encapsulation
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string student_name;
    int student_age;
    string student_gender;

public:
    Student(string name, int age, string gender)
    {
        student_name = name;
        student_age = age;
        student_gender = gender;
    }

    string getName()
    {
        return student_name;
    }

    int getAge()
    {
        return student_age;
    }

    string getGender()
    {
        return student_gender;
    }

    void display()
    {
        cout << "Name: " << getName()
             << ", Age: " << getAge()
             << ", Gender: " << getGender() << endl;
    }
};

int main()
{

    Student s1("Ganesh Mangla", 20, "Male");
    s1.display();

    return 0;
}