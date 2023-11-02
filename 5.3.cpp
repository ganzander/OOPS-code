// Write a program to implement  access modifier (protected)
#include <iostream>
using namespace std;

class Person
{
protected:
    int person_feets;
    int person_inches;

public:
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
    void display()
    {
        cout << "Height of the person is: " << person_feets << " feets and " << person_inches << " inches." << endl;
    }
};

int main()
{
    Person p1(7, 13);

    // cout << "Height of the person is: " << p1.person_feets << " feets and " << p1.person_inches << " inches." << endl;
    // p1.person_feets and p1.person_inches not accessible because the data members are in protected class
    p1.display();

    return 0;
}
