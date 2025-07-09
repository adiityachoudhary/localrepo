#include <iostream>
using namespace std;

struct Arr
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
};

int main()
{
    struct Arr a[5];
    a[0] = 1;
    a[1] = 1;
    a[2] = 1;
    a[3] = 1;

    return 0;
}