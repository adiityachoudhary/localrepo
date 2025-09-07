#include <iostream>
using namespace std;

void pointer(int);

void pointer(int p)
{
    cout << "Address of int i in pointer(): " << &p; // this address is different from the address of
}                                           // beacuse it is stored at a different location in memory

int main()
{
    int i = 4;
    cout << "Address of int i: " << &i << endl;

    pointer(i);
    return 0;
}