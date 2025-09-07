#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double side,areaofsquare;
    cout << "Enter side of square: ";
    cin >> side;

    areaofsquare = pow(side,2);

    cout << "Area of square: " << areaofsquare;

    return 0;
}