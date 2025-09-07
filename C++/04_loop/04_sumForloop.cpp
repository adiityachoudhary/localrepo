#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int n, sum = 0;
    cout << "Enter no. to sum: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout<<"Sum: "<<sum;
    return 0;
}