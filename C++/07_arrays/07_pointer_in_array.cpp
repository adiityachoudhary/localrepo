#include<iostream>
using namespace std;
 
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter marks of "<<i+1<<" : ";
        cin>>marks[i];
    }
    system("cls");
    for (int i = 0; i < 5; i++)
    {
        cout<<"Address of "<<marks[i]<<" : "<<(unsigned)&marks[i]<<endl;
    }

    return 0;
}