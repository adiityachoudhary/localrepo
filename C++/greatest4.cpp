#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int a, b, c, d, great = 0;
    
    cout << "Enter 1st no.: ";
    cin >> a;
    cout << "Enter 2nd no.: ";
    cin >> b;
    cout << "Enter 3rd no.: ";
    cin >> c;
    cout << "Enter 4th no.: ";
    cin >> d;

    if (a > b && a > c && a > d)
        great = a;
    else if (b > c && b > d)
        great = b;
    else if (c > d)
        great = c;
    else
        great = d;

    cout << "Greatest no among " << a << " " << b << " " << c << " " << d << " is : " << great << endl;

    cin.get();
    return 0;
}