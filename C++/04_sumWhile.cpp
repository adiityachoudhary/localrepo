#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("cls");
    int n,s=0,i=1;
    cout << "Enter no. you want to sum: ";
    cin >> n;
    while(i<=n)
    {
        s+=i; //sum=sum+i
        i++;
    }
    cout<<"Sum: "<<s;

    return 0;
}