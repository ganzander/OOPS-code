// Write a program to implement virtual function
#include <iostream>
using namespace std;

class SuperClass
{
public:
    virtual void print()
    {
        cout << "SuperClass called" << endl;
    }
};

class subClass : public SuperClass
{
public:
    void print()
    {
        cout << "subClass called" << endl;
    }
};

int main()
{
    SuperClass *bptr;
    subClass d;
    bptr = &d;

    bptr->print();

    return 0;
}
