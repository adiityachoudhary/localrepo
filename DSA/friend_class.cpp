#include <iostream>
using namespace std;

class A
{
private:
    int number = 90; // private attributes of class Box

    friend class B; // private attributes of class Box is accessed by friend class B
};

class B
{
public:
    void show(A n1)
    {
        cout << "Number: " << n1.number;
    }
};

int main()
{
    A a1;
    B obj1;
    obj1.show(a1);
    return 0;
}