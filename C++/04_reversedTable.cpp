#include<iostream>
using namespace std;
 
int main()
{
    system("cls");
    int t;
    cout << "which table do you want to print in reverse: ";
    cin >> t;
    for (int i = 10; i; i--)
    {
        cout << t << " x " << i << " = " << t * i<<endl;
    }

    return 0;
}