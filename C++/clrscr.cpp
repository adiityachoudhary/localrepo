#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls"); //clrscr will not work in modern systems therefor system("cls"); is used from the #include<csdlib> preprocessor directive header file
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "Screen Cleared\n";
    }
    // getch();
    return 0;
}