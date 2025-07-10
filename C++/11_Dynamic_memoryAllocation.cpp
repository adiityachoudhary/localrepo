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
    free(ptr); //freed allocated memory

    return 0;
}