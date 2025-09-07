#include <iostream>
using namespace std;

void show(struct employee); // function prototyping

struct employee
{
    int code;
    string name;
    int salary;
};

void show(employee e) //function
{
    cout << e.code << ", " << e.name << ", " << e.salary;
}

int main()
{
    struct employee e1 = {123, "Harry Bhai", 50000}; // initializing structures
    show(e1);
    return 0;
}