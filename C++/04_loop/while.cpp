#include <iostream>
using namespace std;
int main()
{
    
    int t;
    int index = 1;
    cout << "Enter which table you want to print" << endl;
    cin >> t;
    system("cls");
    cout << "Table of " << t << endl;
    while (index <= 10)
    {
        cout << t << " x " << index << " = " << t * index << endl;
        index = index + 1;
    }
    cin.get();
    system("cls");
    return 0;
}