// Write a program to implement binary operator overloading
#include <iostream>
using namespace std;

class Count
{
    int value;

public:
    Count()
    {
        value = 10;
    }

    Count operator++()
    {
        Count temp;
        temp.value = ++value;

        return temp;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count count1, temp;
    temp = ++count1;
    temp.display();
    return 0;
}