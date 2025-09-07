#include <iostream>
using namespace std;
void printarray(int x[], int);

void printarray(int x[], int y)
{
    for (int i = 0; i < y; i++)
    {
        cout << "Value at index " << i << " is " << x[i] << endl;
    }
}

int main()
{
    int a[] = {34, 54, 24, 32, 52};
    int n = sizeof(a) / sizeof(a[0]);
    printarray(a, n);
    return 0;
}


