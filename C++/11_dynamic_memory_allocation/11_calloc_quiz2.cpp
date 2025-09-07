#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 4;
    ptr[1] = 8;
    ptr[2] = 16;
    ptr[3] = 32;
    ptr[4] = 64;

    for (int i = 0; i < n; i++) // printing array
    {
        cout << "ptr [" << i << "] : " << ptr[i] << endl;
    }
    free(ptr); // memory occupied by ptr is freed i.e. 5*4= 20 bytes.

    return 0;
}