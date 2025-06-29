#include <iostream>
using namespace std;
void swap(int *, int *);

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 13, b = 8;
    swap(a, b);
    cout << "a: " << a << endl
         << "b: " << b;
    return 0;
}