#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, i=0;
    cout << "How many do you want to print Happy Birthday?\n";
    cin >> n;

    system("cls");
    
    while (i < n)
    {
        cout << "Happy Birthday\n";
        i++;
    }
    return 0;
}