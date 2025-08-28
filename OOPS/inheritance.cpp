// Inheritance is a mechanism in object oriented programming that allows one class (derived/child)
// to acquire the properties and behaviours(data members and member functions) of
//  another class(base/parent)

#include <iostream>
using namespace std;

class Parent // base/ parent class
{
protected:
    int roll;
    string name;
};

class Child : public Parent // single inheritance
{
public:
    Child(int r, string n)
    {
        roll = r;
        name = n;
    }

    ~Child() {};

    void display()
    {
        cout << "Roll no : " << roll << endl
             << "Name : " << name;
    }
};


int main()
{
    Child obj1(2525, "Aditya");

    return 0;
}
