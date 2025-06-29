#include <iostream>
using namespace std;
void callbyreference(int *);

void callbyreference(int *x)
{
    *x *= 10; // x=x*10
}             // a=5*10

int main()
{
    int a = 5;
    cout << "Value of 'a' before callbyreference(): " << a << endl;

    callbyreference(&a);
    
    cout << "Value of 'a' after callbyreference(): " << a << endl;
    return 0;
}