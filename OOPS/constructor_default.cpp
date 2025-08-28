#include <iostream>
using namespace std;

class Student
{

private:
    int roll = 0;

public:
    Student()
    {

        cout << "Default Constructor has been called\n";
        roll = 2001;
        cout << "Roll no. is : " << roll;
    }
};

int main()
{
    Student s1;
    return 0;
}