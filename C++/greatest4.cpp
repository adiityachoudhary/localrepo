#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int a, b, c, d;
    cout << "Enter 1st no.: ";
    cin >> a;
    cout << "Enter 2nd no.: ";
    cin >> b;
    cout << "Enter 3rd no.: ";
    cin >> c;
    cout << "Enter 4th no.: ";
    cin >> d;

    if (a > b && a > c && a > d)
        cout << "Greatest no: " << a;
    else if (b > c && b > d)
        cout << "Greatest no: " << b;
    else if (c > d)
        cout << "Greatest no: " << c;
    else
        cout << "Greatest no: " << d;
    cin.get();
    return 0;
}