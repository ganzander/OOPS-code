// Write a program to implement Multiple Level Inheritance
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

class B : virtual public A
{
public:
    void displayB()
    {
        cout << "B class called" << endl;
    }
};

class C : virtual public A
{
public:
    void displayC()
    {
        cout << "C class called" << endl;
    }
};
class D : public B, public C
{
public:
    void displayD()
    {
        cout << "D class called" << endl;
    }
};
int main()
{
    D d;
    d.displayA();
    d.displayB();
    d.displayC();
    d.displayD();

    return 0;
}
