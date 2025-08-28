#include <iostream>
using namespace std;

class Box
{
private:
    int length = 9; //private attributes of class Box
    int breadth = 15; //private attributes of class Box

    friend void show(Box); //private attributes of class Box is accessed by friend function show()
};

void show(Box a)
{
    int area = a.length * a.breadth;
    cout << "Area: " << area;
}

int main()
{
    Box b1;
    show(b1);
    return 0;
}