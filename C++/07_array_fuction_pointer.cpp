#include <iostream>
using namespace std;
void printarray(int* x, int y);

void printarray(int* x, int y)
{
    for (int i = 0; i < y; i++)
    {
        x[i]+=10;
    }
}

int main()
{
    int a[] = {34, 54, 24, 32, 52};
    int n = sizeof(a) / sizeof(a[0]);
    int* p=a; //int* p= &a[0];  (both are same)

    printarray(p, n);

    for (int i = 0; i < n; i++)
    {
        cout << "Value at index " << i << " is " << a[i] << endl;
    }
    return 0;
}