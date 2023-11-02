// Write a program to implement Polymorphism
#include <iostream>
using namespace std;

class Imaginary
{
private:
    int real, imaginary;

public:
    Imaginary(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }

    Imaginary operator+(Imaginary &obj)
    {
        Imaginary res;
        res.real = real + obj.real;
        res.imaginary = imaginary + obj.imaginary;
        return res;
    }
    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }
};

// Driver code
int main()
{
    Imaginary a(10, 5), b(2, 4);

    Imaginary c = a + b;
    c.display();
    return 0;
}
