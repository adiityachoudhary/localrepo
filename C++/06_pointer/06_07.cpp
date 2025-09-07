#include <iostream>
using namespace std;
int callbyvalue(int);

int callbyvalue(int x)
{
   x *= 10; // x=x*10
   cout << "Value of 'a' in callbyvalue(): " << x << endl;
   return x;
}

int main()
{
    int a = 5;
    callbyvalue(a);
    cout << "Value of 'a' after callbyvalue(): " << a << endl;
    return 0;
}