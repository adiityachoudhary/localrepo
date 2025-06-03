#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    int a = 35, b=4;
    int *ptra = &a;
    int *ptrb = &b;
    cout << "Value of a = " << a<<endl;
    cout << "Value of *ptra = " << *ptra<<endl;
    cout << "address of &a = " << &a<<endl;
    cout << "address of ptra = " << ptra<<endl<<endl;

    cout << "Value of b = " << b<<endl;
    cout << "Value of *ptrb = " << *ptrb<<endl;
    cout << "address of &b = " << &b<<endl;
    cout << "address of ptrb = " << ptrb;

    getch();
    return 0;
}