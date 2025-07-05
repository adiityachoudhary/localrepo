#include <iostream>
using namespace std;

void show(struct employee); //function prototyping

// details of 3 employees using structure array
struct employee
{
    int code; // this declares an new user defined data type
    string name;
    int salary;
}; // semicolon is important


void show(struct employee e)
{
    cout<<e.code<<", "<<e.name<<", "<<e.salary;
}

int main()
{
    struct employee e1 = {123, "Harry Bhai", 50000}; // initializing structures
    show(e1);
    return 0;
}