#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    cout << "For loop program" << endl;
    int n;
    cout << "Enter no." << endl;
    cin >> n;
    cout << "Your Pattern of " << n << " is printing below" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    getch();
    return 0;
}