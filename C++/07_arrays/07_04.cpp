#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a[10],n;
    cout << "Enter table you want to print: ";
    cin>>n;

    for (int i = 0; i < 10; i++)
    {
        a[i] = (i+1) * n;
        cout <<n <<" x " << (i+1) << " = " << a[i] << endl;
    }

    return 0;
}