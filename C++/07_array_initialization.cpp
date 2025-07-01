#include <iostream>
using namespace std;

int main()
{
    int a[5] = {23, 45, 65, 34, 23};
    for (int i = 0; i< 5; i++)
    {
        cout << "Value at index " << i << " : " << a[i] << endl;
    }
    return 0;
}