#include <iostream>
using namespace std;
int fun(int *);

int fun(int *p)
{
    return *p += 1;
}

int main()
{
    int a = 5, b;
    cout << "Value of int a: " << a << endl; //value of a before executing fun()
    fun(&a);
    cout << "Value of int a: " << a;    //value of a after executing fun() i.e. 6
    return 0;
}