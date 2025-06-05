#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int n, i = 1;
    unsigned long long fact = 1;
    cout << "Enter no. to sum: ";
    cin >> n;

    while (i <= n)
    {
        fact*=i;
        i++;
    }
    cout << "Factorial: " << fact;
    return 0;
}