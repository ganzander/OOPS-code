// Write a program to implement pure virtual function
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
};

class Lion : public Animal
{

public:
    void sound()
    {
        cout << "Roar";
    }
};

int main(void)
{
    Lion d;
    d.sound();
    return 0;
}
