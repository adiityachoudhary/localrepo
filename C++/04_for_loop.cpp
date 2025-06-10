#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cout << "How many do you want to print Happy Birthday?\n";
    cin >> n;

    for (int i = 0; i < n; i++)
        cout <<"Happy Birthday\n";

    return 0;
}