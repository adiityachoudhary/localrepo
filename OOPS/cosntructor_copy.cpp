/*Default copying

when we create a copy of an object using another object of the same class ,
C++ automatically copies the values of all data member-
this is known as default copying
This copying happens using a default copy constructor*/

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string course;

    Student(string n, string c)
    {
        name = n;
        course = c;
    }

    Student(const Student &s)
    {
        name = " ";
        course = s.course;
    }

    void display()
    {
        cout << "Name : " << name << endl
             << "Course : " << course << endl;
    }
};

int main()
{
    Student s1("Aditya", "MCA");
    s1.display();

    Student s2(s1); // default copying by copy constructor
    s2.display();

    return 0;
}