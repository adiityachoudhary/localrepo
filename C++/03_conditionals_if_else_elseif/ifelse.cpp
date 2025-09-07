#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age\n";
    cin >> age;

    if (age >= 150 || age <= 5)
    {
        cout << "Invalid" << endl;
    }
    else if (age >= 18)
    {
        cout << "You are eligible to Vote\n";
    }
    else
        cout << "You are not eligible to vote" << endl;
    return 0;
}