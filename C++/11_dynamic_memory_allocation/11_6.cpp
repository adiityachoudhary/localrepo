#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 8;
    ptr[3] = 16;
    ptr[4] = 32;
    for (int i = 0; i < n; i++)
    {
        cout << "ptr [" << i << "] : " << ptr[i] << endl;
    }
    ptr = (int *)realloc(ptr, 10 * sizeof(int)); // realloc
    ptr[9] = 128;
    cout << "ptr [" << 9 << "] : " << ptr[9] << endl;

    return 0;
}