// Write a program to implement Abstraction
#include <iostream>
using namespace std;

class Abstraction
{
private:
    int a, b;

public:
    Abstraction(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    Abstraction object(10, 20);
    object.display();
    return 0;
}
