#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int year;
    cout << "Enter year: ";
    cin >> year;

    // if an year is divisible by 4 and 400 but not by 100 it is a leap year

    bool l = (year % 4 == 0) && (year % 400 == 0 || year % 100 != 0);

    if (l)
        cout << year << " is a Leap year"; // if L is TRUE
    else
        cout << year << " is not a Leap year"; // if L is FALSE

    return 0;
}