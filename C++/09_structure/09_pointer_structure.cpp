#include <iostream>
using namespace std;

// details of 3 employees using structure array
struct employee
{
    int code; // this declares an new user defined data type
    string name;
    int salary;
}; // semicolon is important

int main()
{
    employee e1 = {123, "Harry Bhai", 50000}; // initializing structures

    struct employee *ptr; // array of structures
    ptr = &e1;
    cout<<(*ptr).code<<endl;
    cout<<(*ptr).name<<endl;
    cout<<ptr->code<<endl; //same as (*ptr).code

    return 0;
}