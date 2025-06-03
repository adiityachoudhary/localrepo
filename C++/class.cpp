#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;

class Employee
{
private:
    int pin=12345;

public:
    string name;
    int salary;

    // // constructor
    // Employee(string name, float salary, int pin)
    // {
    //     cout<<"This is Constructor \n";
    //     this->name = name;
    //     this->salary = salary;
    //     this->pin = pin;
    // }

    // member function
    void showDetails()
    {
        cout << "Employee name - " << name << endl;
        cout << "Employee salary - " << salary << endl;
    }
    void showPin()
    {
        cout << "Your Pin is - " << pin << endl;
    }
};

//inheritance
class Student : public Employee
{
public:
    string course;
    int rollno;

    void studentDetail()
    {
        cout << "Name : " << name << endl;
        cout << "Course : " << course << endl;
        cout << "Roll no. : " << rollno << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    system("cls");
    Student s1;
    s1.name="Aditya Choudhary";
    s1.course="MCA";
    s1.rollno=225002;
    s1.salary=50000;
    s1.studentDetail();
    s1.showPin();
    return 0;
}