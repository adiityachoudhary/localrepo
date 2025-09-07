#include <iostream>
using namespace std;

// details of three employees using structure
struct employee
{
    int code; // this declares an new user defined data type
    string name;
    int salary;
}; // semicolon is important

int main()
{
    struct employee e1, e2, e3; // three employees data

    cout << "Enter employee 1 details\n";
    cout << "Code : ";
    cin >> e1.code;
    cout << "Name : ";
    cin >> e1.name;
    cout << "Salary : ";
    cin >> e1.salary;

    cout << "Enter employee 2 details\n";
    cout << "Code : ";
    cin >> e2.code;
    cout << "Name : ";
    cin >> e2.name;
    cout << "Salary : ";
    cin >> e2.salary;

    cout << "Enter employee 3 details\n";
    cout << "Code : ";
    cin >> e3.code;
    cout << "Name : ";
    cin >> e3.name;
    cout << "Salary : ";
    cin >> e3.salary;

    cout << e1.code <<", "
         << e1.name <<", "
         << e1.salary << endl;
         
    cout << e2.code <<", "
         << e2.name <<", "
         << e2.salary << endl;

    cout << e3.code <<", "
         << e3.name <<", "
         << e3.salary << endl;

    return 0;
}