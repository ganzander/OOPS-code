// Write a program to pass object to a function
#include <iostream>
using namespace std;

class Person
{
    int person_feets;
    int person_inches;

public:
    Person()
    {
        person_feets = 0;
        person_inches = 0;
    }
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

    void sumofHeights(Person p1)
    {
        Person temp;
        temp.person_feets = p1.person_feets + person_feets;
        temp.person_inches = p1.person_inches + person_inches;
        if (temp.person_inches > 12)
        {
            temp.person_feets++;
            temp.person_inches %= 12;
        }
        cout << "The sum of heights of the two people are: " << temp.person_feets << " feets and " << temp.person_inches << " inches." << endl;
    }
};

int main()
{
    Person p1(1, 2);
    p1.display();
    Person p2(7, 13);
    p2.display();
    p2.sumofHeights(p1);

    return 0;
}
