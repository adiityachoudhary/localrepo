#include <iostream>
using namespace std;

// details of 3 employees using structure array
typedef struct
{
    int code; // this declares an new user defined data type
    string name;
    int salary;
} emp; // now emp is a struct data type

int main()
{
    typedef int aditya; // renaming int as aditya temporarily
    aditya a = 100;     // alias for int
    cout << a << endl;

    emp e1,e2;//typedef struct datatype emp
    e1 = {123, "Harry Bhai", 50000};
    e2 = {453, "codewithharry", 150000};
    cout << e1.code << ", " << e1.name << ", " << e1.salary<<endl;
    cout << e2.code << ", " << e2.name << ", " << e2.salary;

    return 0;
}