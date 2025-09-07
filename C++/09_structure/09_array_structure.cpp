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
    struct employee facebook[3]; // array of structures

    for (int i = 0; i < 3; i++)
    {
        cout << "Details of employee " << i + 1<<endl;
        cout << "Code : ";
        cin >> facebook[i].code;
        cout << "Name : ";
        cin >> facebook[i].name;
        cout << "Salary : ";
        cin >> facebook[i].salary;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Details of employee " << i + 1<<": ";
        cout << facebook[i].code << ", "
             << facebook[i].name << ", "
             << facebook[i].salary << endl;
    }

    return 0;
}