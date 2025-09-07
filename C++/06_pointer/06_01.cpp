#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    cout << "Value of int a: " << a << endl;
    cout << "Address of int a: " << p<<endl;
     
    int* b = p; //address of a that is stored in p is now stored in pointer *b
    cout<<"Value at address "<<b<<" is "<<*b;
    return 0;
}