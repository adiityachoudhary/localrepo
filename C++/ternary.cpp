#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("cls");
    int a, b;
    cout << "Enter your age: ";
    cin >> a;
    system("cls");

    (a >= 18 ? cout << "Eligibile to Vote"       // if the condition(a >= 18) is true first half of ":" will execute
             : cout << "Not Eligibile to Vote"); // else this will execute

    cin.get();
    return 0;
}