#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int year, l;
    cout << "Enter year: ";
    cin >> year;
    l = year % 4;
    if (l == 0)
        cout << year << " is a Leap year";
        else 
        cout << year << " is not a Leap year";

    return 0;
}