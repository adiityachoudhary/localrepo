#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    int p, q;
    int x[p][q];
    cout << "Enter Row of matrix = ";
    cin >> p;
    cout << "Enter Column of matrix = ";
    cin >> q;
    cout << endl;

    // Data feeding in matrix
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << "Feed data at (" << i << ", " << j << ") = ";
            cin >> x[i][j];
        }
    }
    cout << endl;

    // print the matrix
    cout << "The Matrix is Printing :-" << endl;
    for (int a = 0; a < p; a++)
    {
        cout << "| ";
        for (int b = 0; b < q; b++)
        {
            cout << x[a][b] << " ";
        }
        cout << "|" << endl;
    }
    getch();
    return 0;
}