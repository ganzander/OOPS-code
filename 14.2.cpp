// Write a program to implement Multi Level Inheritance
#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    void displayA()
    {
        cout << "A class called" << endl;
    }
};

class B : public A
{
public:
    void displayB()
    {
        cout << "B class called" << endl;
    }
};

class C : public B
{
public:
    void displayC()
    {
        cout << "C class called" << endl;
    }
};
int main()
{
    C c;
    c.displayA();
    c.displayB();
    c.displayC();

    return 0;
}
