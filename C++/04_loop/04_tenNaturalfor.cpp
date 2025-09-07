#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n, sum = 0;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of " << n << " natural numbers : " << sum;

    return 0;
}