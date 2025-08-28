#include <iostream>
using namespace std;

class Student
{
private: // by default it is private if no access specifier is mentioned
    int roll;

public:
    void setroll(int r)
    {
        // cout<<"Enter roll no. : ";
        // cin>>roll;
        roll = r;
    }

    void showroll()
    {
        cout << "Roll no. of student is : " << roll;
    }
};

int main()
{
    Student s1;
    s1.setroll(225002); // to minimize this extra step we use constructor
    s1.showroll();

    return 0;
}