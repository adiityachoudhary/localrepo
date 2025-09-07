#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int income;
    double tax = 0;
    cout << "Enter your annual income: ";
    cin >> income;

    // there is not tax for income of 2.5 lacs
    if (income <= 250000)
        tax = 0;

    else if (income > 250000 && income < 500000) // for the first 2.5 lacs there is no tax but on the rest amount
    {
        tax = (income - 250000) * 0.05;
    }

    else if (income >= 500000 && income < 1000000) // for the first 2.5 lacs there is no tax but next 2.5L -> 5%, next 5L ->20%
    {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;
    }

    // for the first 2.5 lacs there is no tax but on next 2.5L -> 5%, next 5L ->20% and the rest amount is charged 30%
    else if (income >= 1000000)
    {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
    }
    cout << "You have to pay Rs " << tax << " as income tax";

    cin.get();
    return 0;
}