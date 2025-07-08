#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int)); // dynamic memory allocation

    ptr[0] = 4;
    ptr[1] = 8;
    ptr[2] = 16;
    ptr[3] = 32;
    ptr[4] = 64;

    for (int i = 0; i < n; i++)
    {
        cout << "ptr [" << i << "] : " << ptr[i] << endl;
    }

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    ptr[10] = 55;
    cout << "ptr [" << 10 << "] : " << ptr[10] << endl;

    return 0;
}