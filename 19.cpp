// Write a program to implement virtual destructors
#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Base object created" << endl;
    }
    virtual ~base()
    {
        cout << "Base object destroyed" << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Derived object created" << endl;
    }
    ~derived()
    {
        cout << "Derived object destroyed" << endl;
    }
};

int main()
{
    derived *d = new derived();
    base *b = d;
    delete b;
    return 0;
}
