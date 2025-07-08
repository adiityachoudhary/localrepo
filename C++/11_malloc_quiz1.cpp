#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float)); // dyanmic memory allocation
    ptr[0] = 4.16;
    ptr[1] = 8.64;
    ptr[2] = 16.256;
    ptr[3] = 32.1024;
    ptr[4] = 64.4096;

    // free(ptr); //// memory occupied by ptr is freed i.e. 5*4= 20 bytes.

    for (int i = 0; i < n; i++) // printing array
    {
        cout << "ptr [" << i << "] : " << ptr[i] << endl;
    }

    return 0;
}