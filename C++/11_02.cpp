#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value of ptr [" << i << "] : ";
        cin>>ptr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "ptr [" << i << "] : " << ptr[i] << endl;
    }
    return 0;
}