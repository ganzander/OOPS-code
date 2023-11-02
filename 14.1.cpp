// Write a program to implement Single Level Inheritance
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
int main()
{
    B b;
    b.displayA();
    b.displayB();

    return 0;
}
