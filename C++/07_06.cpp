#include <iostream>
using namespace std;
int positive(int[], int);

int positive(int a[], int x)
{
    int counter = 0;
    for (int i = 0; i < x; i++) // reverse the array
    {
        if (a[i] > 0)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int a[] = {-47, 56, -21, 44, -75, -81, 97, 35, 15, 45, 56, 4, 5, -1, 3};
    int n = sizeof(a) / sizeof(a[0]); // calculate no. of elements

    cout << "Number of positive elements in a[10] is " << positive(a, n);
    return 0;
}