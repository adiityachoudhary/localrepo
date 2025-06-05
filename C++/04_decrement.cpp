#include<iostream>
#include<cstdlib>
using namespace std;
 
int main()
{
    system("cls");
    int n;
    cout<<"Enter any no.: ";
    cin>>n;
    for(int i=n;i;i--) //here the condition i is checked until it is 0(i.e FALSE)
    {
        cout<<i<<endl;
    }
    return 0;
}