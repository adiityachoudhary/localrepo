#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("cls");
    int a;
    cout << "Enter your age: ";
    cin >> a;
    system("cls");

    if (a >= 18)
        if (a > 70)
            cout << "Your age exceeds the voting rights";
        else
            cout << "Eligibile to Vote";
    else
        cout << "You are Underage to Vote";

    cin.get();
    return 0;
}