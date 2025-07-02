#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a[10];
    cout << "Table of 5"<< endl;

    for (int i = 0; i < 10; i++)
    {
        a[i] = (i+1) * 5;
        cout << "5 x " << (i+1) << " = " << a[i] << endl;
    }

    return 0;
}