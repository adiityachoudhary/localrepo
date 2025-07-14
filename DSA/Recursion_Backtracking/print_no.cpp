#include <iostream>
using namespace std;
void printNo(int n)
{
    if (n == 1) // base case
    {
        cout << "1 ";
        return;
    }
    cout << n << ", ";
    printNo(n - 1); // recursive function
}

int main()
{
    printNo(10);
    return 0;
}