#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int n, not_prime = 0;
    cout << "Enter no. to check prime no.: ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && i != 2)
            not_prime = 1;
        break;
    }

    if (not_prime)
        cout << n << " is not a Prime no";
    else
        cout << n << " is a Prime no";

    return 0;
}