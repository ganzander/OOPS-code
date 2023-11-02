// Write a program to implement unary operator overloading
#include <iostream>
using namespace std;

class Imaginary
{
    int real, img;

public:
    Imaginary(int r, int i)
    {
        real = r;
        img = i;
    }

    void print()
    {
        int newImg = img < 0 ? -img : img;
        cout << real << (img < 0 ? " - " : " + ") << "i" << newImg << endl;
    }

    Imaginary operator-()
    {
        return Imaginary(-(real), -(img));
    }
};

int main()
{
    Imaginary a(-3, 4);
    a.print();
    Imaginary b = -a;
    b.print();
    return 0;
}
