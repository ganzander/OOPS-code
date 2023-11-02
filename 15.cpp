// Write a program to implement Virtual base class
#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "A class called" << endl;
    }
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
    D object;
    object.show();
}
