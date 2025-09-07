#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 8;
    ptr[3] = 16;
    ptr[4] = 32;
    ptr[5] = 64;
    for (int i = 0; i < n; i++)
    {
        cout << "ptr [" << i << "] : " << ptr[i] << endl;
    }
    return 0;
}