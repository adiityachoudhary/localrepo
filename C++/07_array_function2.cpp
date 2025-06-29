#include <iostream>
using namespace std;
void printarray(int x[], int y);

void printarray(int x[], int y)
{
    for (int i = 0; i < y; i++)
    {
        x[i] += 10;
    }
}
int main()
{
    int a[] = {34, 54, 24, 32, 52};
    int n = sizeof(a) / sizeof(a[0]);

    // ✅ Does the whole array get sent?
    // ❌ No, only a pointer to the first element is passed.
    // ✅ Can the function modify the original array?
    // ✔️ Yes, because it works with the same memory location as the original array.
    
    printarray(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << "Value at index " << i << " is " << a[i] << endl;
    }
    return 0;
}