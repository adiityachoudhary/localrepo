#include <iostream>
using namespace std;

int main()
{
    int a[2][3][4];// 3d array

    // printing 3d array's addresses
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout << (unsigned)&a[i][j][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}