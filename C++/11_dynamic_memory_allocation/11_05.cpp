#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i+1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "ptr [" << i << "] : 7 x " << i + 1 << " = " << ptr[i] << endl;
    }

    cout<<endl;

    n = 15;
    cout<<"After realloc n=15\n";
    ptr = (int *)realloc(ptr, n * sizeof(int)); // realloc
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i+1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "ptr [" << i << "] : 7 x " << i + 1 << " = " << ptr[i] << endl;
    }

    return 0;
}