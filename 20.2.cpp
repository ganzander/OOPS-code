// Write a program to implement template function
#include <iostream>
using namespace std;

template <typename T>
T add(T num1, T num2)
{
    return (num1 + num2);
}

int main()
{
    int sum1;
    double sum2;

    sum1 = add<int>(2, 3);
    cout << sum1 << endl;

    sum2 = add<double>(2.3, 4.5);
    cout << sum2 << endl;

    return 0;
}