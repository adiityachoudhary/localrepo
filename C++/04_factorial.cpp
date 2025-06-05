#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int n;
    unsigned long long fact = 1;
    cout << "Enter no. to find factorial: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact;
    return 0;
}