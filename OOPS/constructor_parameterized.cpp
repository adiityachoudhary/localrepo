#include <iostream>
using namespace std;

class Student
{

private:
    int roll = 0;

public:
    Student(int r)
    {

        cout << "Parameterized Constructor has been called\n";
        roll = r;
        cout << "Roll no. is : " << roll;
    }
};

int main()
{
    Student s1(2025);
    return 0;
}