#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
{
    // system("cls");
    int n;
    cout << "Enter no. of data you want to feed" << endl;
    cin >> n;
    int x[n];

    // user input
    for (int i = 0; i < n; i++)
    {
        cout << "Enter no. at index " << i << " = ";
        cin >> x[i];
    }
    cout << endl;

    // output
    for (int i = 0; i < n; i++)
    {
        cout << "Your no. at index " << i << " is " << x[i] << endl;
    }cout<<"Thank you";
    getch();
    return 0;
}