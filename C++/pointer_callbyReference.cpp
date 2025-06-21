#include <iostream>
using namespace std;
void fun(int *, int);

void fun(int *x, int y) // formal parameters
{
    *x += 5;  //*x is the address of int a; here it changes the value of int a=2+5  i.e.=7
    y += 10;
    cout << *x << ", " << y<<endl;
}
int main()
{
    int a = 2, b = 3; // actual parameters
    fun(&a, b);//&a sends the address of int a while b sends the copy of value of int b i.e.3
    cout << a << ", " << b;

    return 0;
}