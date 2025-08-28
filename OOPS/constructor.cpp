// Constructor is a special function of a class that gets automatically gets callled when object is created
// it must be same name as class
// it must be public
// it has no return type

// types of constructor
//  1. Default
//  2. Parameterized
//  3. Copy constructor

#include <iostream>
using namespace std;

class Student
{
    int roll=0;

public:
    Student() // Default constructor
    {
        cout << "Default constructor has been called\n";
    }

    Student(int r) // parameterized constructor
    {
        cout << "Parameterized constructor has been called\n";
        roll = r;
    }

    ~Student()
    {
        cout << "Constructor has been destroyed\n";
    }

    void display()
    {
        cout << "Roll no. is : " << roll<<endl;
    }
};

int main()
{
    Student s1(225002);
    s1.display();
    return 0;
}