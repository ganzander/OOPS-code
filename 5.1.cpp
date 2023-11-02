// Write a program to implement  access modifier (public)
#include <iostream>
using namespace std;

class Person
{
public:
    int person_feets;
    int person_inches;
    Person(int feet, int inch)
    {
        if (inch > 12)
        {
            feet++;
            inch = inch % 12;
        }
        person_feets = feet;
        person_inches = inch;
    }
};

int main()
{

    // p1.person_feets and p1.person_inches are accessible because the data members are in public class
    Person p1(7, 13);
    cout << "Height of the person is: " << p1.person_feets << " feets and " << p1.person_inches << " inches." << endl;

    return 0;
}
