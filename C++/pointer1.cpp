#include<iostream>
using namespace std;
 
int main()
{
    int x=15;
    int* p=&x;
    *p=*p+1;
    cout<<x;

    return 0;
}