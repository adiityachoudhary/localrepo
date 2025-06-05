#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int t;
    cout << "which table do you want to print: ";
    cin >> t;
    for (int i = 1; i <= 10; i++)
    {
        cout << t << " x " << i << " = " << t * i<<endl;
    }

    return 0;
}