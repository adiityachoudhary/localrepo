#include <iostream>
using namespace std;

int main()
{
    int a[3][10], num;

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            num = 2;
        }
        else if (i == 1)
        {
            num = 7;
        }
        else if (i == 2)
        {
            num = 9;
        }

        for (int j = 0; j < 10; j++)
        {

            a[i][j] = (j + 1) * num;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}