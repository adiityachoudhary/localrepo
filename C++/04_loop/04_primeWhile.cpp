#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int n, i = 1, f = 0;
    cout << "Enter no. to check prime no.: ";
    cin >> n;

    while (i <= n)
    {
        if (n % i == 0)
            f++;
        i++;
    }

    if (f == 2)
        cout << n << " is a Prime no";
    else
        cout << n << " is not a Prime no";

    return 0;
}