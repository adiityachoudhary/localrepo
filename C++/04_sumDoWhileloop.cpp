#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int n, i = 1, sum = 0;
    cout << "Enter no. to sum: ";
    cin >> n;


    do
    {
        sum += i;
        i++;
    } while (i <= n);

    cout << "Sum: " << sum;
    return 0;
}