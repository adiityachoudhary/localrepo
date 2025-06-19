#include <iostream>
using namespace std;

int main()
{
    int a = 72, b = 73;
    int *p = &a;
    // '*' --> Dereferencing operator
    // '&' --> Stores the address
    cout << a << endl;
    cout << *p << endl;
    cout << p << endl;  // address in HEX
    cout << &b << endl; // address in HEX

    cout << int(p) << endl;  // address in DECIMAL
    cout << int(&b) << endl; // address in DECIMAL
    
    cout << *(&a) << endl;
    return 0;
}