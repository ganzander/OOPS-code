// Write a program to implement template class
#include <iostream>
using namespace std;

template <class T>
class A
{
    T num;

public:
    A(T number)
    {
        num = number;
    }

    A add(A &sample)
    {
        A temp(0);
        temp.num = (num + sample.num);
        return temp;
    }

    void display()
    {
        cout << "Sum is " << num << endl;
    }
};

int main()
{
    A<int> a(5);
    A<int> b(8);

    // calling with int parameters
    A<int> c = a.add(b);
    c.display();

    return 0;
}
