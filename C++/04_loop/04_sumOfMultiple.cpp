#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int n, m, t, sum = 0;
    cout << "Enter table no. to sum: ";
    cin >> n;
    cout << "Enter multiple no. to sum: ";
    cin >> m;

    // sum of table
    for (int i = 1; i <= m; i++)
    {
        t = n * i;
        sum += t;
    }

    cout << "Sum: " << sum;
    return 0;
}