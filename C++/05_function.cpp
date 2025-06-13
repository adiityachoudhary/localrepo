#include <iostream>
using namespace std;

int sum(int, int); // fuction prototyping

int sum(int a, int b) // fuction definition
{
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "sum of " << a << " and " << b << " is " << a + b << endl;
    return a + b;
}

int main()
{
    int again, a, b;
    do
    {
        sum(a, b); // function call
        
        cout << endl
             << "Press 1 to sum again: ";
        cin >> again;

    } while (again == 1);

    return 0;
}