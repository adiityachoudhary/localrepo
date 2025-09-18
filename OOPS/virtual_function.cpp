// virtual function
// A virtual function is a member function in a base class that you expect to be overridden in derived classes.
// It enables runtime polymorphism (dynamic dispatch).
// Declared using the keyword virtual in the base class.

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base class" << endl;
    }
};

class Derived : public Base
{
public:
    void display() override
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->display();
    return 0;
}