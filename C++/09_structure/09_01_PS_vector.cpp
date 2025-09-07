#include <iostream>
using namespace std;

struct vector
{
    int i;
    int j;
};

int main()
{
    vector v1, v2;
    v1 = {4, 5};
    v2 = {7, 8};
    cout << v1.i << "i " << v1.j << "j\n";
    cout << v2.i << "i " << v2.j << "j\n";

    return 0;
}