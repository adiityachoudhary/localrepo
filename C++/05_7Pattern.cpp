#include <iostream>
using namespace std;

int pattern(int);

int pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    pattern(n);
    return 0;
}