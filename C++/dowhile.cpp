#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");

    int index = 0;
    do
    {
        cout << "Your index is at " << index << endl;
        index++;
    } while (index <= 10);

    getch();
    return 0;
}