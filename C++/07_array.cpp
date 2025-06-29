#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    // inpute
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of " << i + 1 << " : ";
        cin >> marks[i];
    }

    system("cls");
    // output
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks of " << i + 1 << " : " << marks[i] << endl;
    }

    return 0;
}