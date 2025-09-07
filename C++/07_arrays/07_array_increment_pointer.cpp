#include <iostream>
using namespace std;

int main()
{
    int a[5] = {23, 45, 65, 34, 23};
    
    int* p=a; //same as int * p= a[0];

    for (int i = 0; i< 5; i++)
    {
        cout << "Address at index " << i << " : " << *p << endl;
        p++;
    }
    return 0;
}