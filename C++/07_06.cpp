#include <iostream>
using namespace std;

int main()
{
    int a[10] = {58, -47, 56, -21, 44, -75, -81, 97, 35, 15};
    int counter = 0;

    for (int i = 0; i < 10; i++) // reverse the array
    {
        if (a[i] > 0)
        {
            counter++;
        }
    }
    cout << "Number of positive elements in a[10] is " << counter;
    return 0;
}