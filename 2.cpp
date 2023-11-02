// Write a program to create classes and its objects
#include <iostream>
#include <string>
using namespace std;

class greeting
{

    string greeting_message;

public:
    greeting(string name)
    {
        greeting_message = "Hello " + name;
    }
    void greetHello()
    {
        cout << greeting_message;
    }
};

int main()
{
    string name;
    greeting a("Ganesh");
    a.greetHello();
    return 0;
}