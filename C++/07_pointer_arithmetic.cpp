#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *pt_a = &a;
    cout << "Address of a: " << (unsigned)pt_a << endl;
    pt_a++;
    cout << "Address of a after increment: " << (unsigned)pt_a << endl; // int incremented by 4 bytes

    char b = 'A';
    char *pt_b = &b;
    cout << "Address of b: " << (unsigned)pt_b << endl;
    pt_b++;
    cout << "Address of b after increment: " << (unsigned)pt_b << endl; // char incremented by 1 bytes

    double c = 56654545;
    double *pt_c = &c;
    cout << "Address of c: " << (unsigned)pt_c << endl;
    pt_c++;
    cout << "Address of c after increment: " << (unsigned)pt_c << endl; // float incremented by 8 bytes

    return 0;
}