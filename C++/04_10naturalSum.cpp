#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n, i = 1, sum = 0;
    cout << "Enter n:";
    cin >> n;

    while (i <= n) // sum of first natural numbers
    {
        // cout << i<<endl; //printing each iteration
        sum += i;
        i++;
    }
    cout << "Sum of first " << n << " numbers: " << sum;

    return 0;
}