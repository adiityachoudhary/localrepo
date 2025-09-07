#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    system("cls");
    int a,b;
    cout << "Enter first no." << endl;
    cin >> a;
    cout << "Enter second no." << endl;
    cin >> b;
    cout << "Fucntion returned = " << sum(a, b) << endl;
    getch();
    return 0;
}