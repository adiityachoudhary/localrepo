#include <iostream>
using namespace std;

int main()
{
    int a[10] = {58, 47, 56, 21, 44, 75, 81, 97, 35, 15};

    for (int i = 10; i; i--) //reverse the array
    {
        cout <<"Array at index "<<i-1<<" is "<<a[i-1] << endl;
    }
    return 0;
}