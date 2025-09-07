#include <iostream>
#include <cstdlib>
using namespace std;

// function overloading is an example of polymorphism
int add(int a, int b)
{
    return a+b;
}
int add(int a, int b, int c)
{
    return a+b+c;
}
double add(double a, double b)
{
    return a+b;
}

int main()
{
    system("cls");

    cout<<add(10,20)<<endl;
    cout<<add(1,2,3)<<endl;
    cout<<add(10.05,50.55)<<endl;

    return 0;
}