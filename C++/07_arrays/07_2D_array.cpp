#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int x = 3, y = 2;
    int a[x][y];

    // taking input in array- a[3][2]
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Enter value at index " << "[" << i << "]" << "[" << j << "] : ";
            cin >> a[i][j];
        }
    }

    // printing the array
    for (int i = 0; i < x; i++)
    {
        cout << "| ";
        for (int j = 0; j < y; j++)
        {
            cout << a[i][j];
            cout << " ";
        }
        cout << "|" << endl;
    }
    return 0;
}