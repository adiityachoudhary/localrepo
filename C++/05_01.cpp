#include <iostream>
using namespace std;

int average(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    int avg = average(a, b, c);

    cout << "Average no: " << avg;
    return 0;
}