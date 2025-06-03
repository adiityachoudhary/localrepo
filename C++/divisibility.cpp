#include <iostream>
#include <cstdlib>
using namespace std;

int _97(int a) // parameterized function where n is passed from main function as integer datab types
{
    if (a % 97 == 0)
        cout << a << " is divisible by 97\n"<<a/97<<" times";
    else
        cout << a << " is not divisible by 97";
    return 0;
}

int main()
{
    system("cls");
    cout << "Enter any no. to check if it is divisible by 97 or not : ";
    int n;
    cin >> n;
    system("cls");
    _97(n); // function call where n is passed as an integer value in the function to process
    cin.ignore();
    cin.get();
    return 0;
}