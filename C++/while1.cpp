#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int n, i = 0;
    cout << "Enter any no.: ";
    cin >> n;
    while (i <= n)
    {
        cout << i * 5 << endl;
        i++;
    }
    cin.get();
    return 0;
}