#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a; //name of the array is always used as the first element of the array
    // cout << "NO. of elements in a[]: " << sizeof(a) / sizeof(a[0])<<endl;
    cout << *p << endl; // dereferenced to the first element of a[]
    cout << *p++ << endl;
    cout << *++p << endl;
    cout << *p-- << endl;
    cout << *--p << endl;
    
    int *start = &a[0];
    int *end = &a[4];
    int diff = (end - start);
    cout << diff << endl;
    return 0;
}