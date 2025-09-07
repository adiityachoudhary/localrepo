#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int a[n][n][n];
    int num[]={2,7,9};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                a[i][j][k] = (k + 1) * num[i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << a[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}