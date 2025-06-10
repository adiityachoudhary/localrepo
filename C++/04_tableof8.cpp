#include<iostream>
using namespace std;
 
int main()
{
    system("cls");
    int n,sum=0;
    cout<<"Enter n:";
    cin>>n;

    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
        sum+=i*n;
    }
        cout<<endl<<"Sum of table "<<n<<" = "<<sum<<endl;

    return 0;
}