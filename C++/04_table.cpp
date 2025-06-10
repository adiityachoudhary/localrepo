#include<iostream>
using namespace std;
 
int main()
{
    system("cls");
    int n;
    cout<<"Enter n:";
    cin>>n;

    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    }
    
    return 0;
}