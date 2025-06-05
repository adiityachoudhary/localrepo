#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int income;
    float tax;
    cout << "Enter your annual income: ";
    cin >> income;

    if (income < 250000)
        cout << "You don't have to pay any income tax";

    else if (income >= 250000 && income < 500000)
    {
        tax = income * 0.05;
        cout << "You have to pay Rs " << tax << " as income tax";
    }

    else if (income >= 500000 && income < 1000000)
    {
        tax = income * 0.20;
        cout << "You have to pay Rs " << tax << " as income tax";
    }

    else if (income >= 1000000)
    {
        tax = income * 0.30;
        cout << "You have to pay Rs " << tax << " as income tax";
    }
    cin.get();
    return 0;
}