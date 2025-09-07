// Program to find average of three numbers

#include <iostream>
#include <iomanip> //to setprecision for decimal upto 2 places setprecision(4)

using namespace std;

float average(int, int, int); // function prototyping

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    system("cls");
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    float avg = average(a, b, c);

    cout << "Average no: " <<setprecision(4)<< avg;
    return 0;
}