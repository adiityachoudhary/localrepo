#include <iostream>
using namespace std;

struct student
{
    int roll;
    string name;
};

int main()
{
    struct student s1 = {007, "Harry"};
    struct student *ptr = &s1;
    ptr->roll; // same as (*ptr).roll
    ptr->name; // same as (*ptr).name
    cout << "student e1: {" << ptr->roll << ", " << ptr ->name<<"}";

    return 0;
}