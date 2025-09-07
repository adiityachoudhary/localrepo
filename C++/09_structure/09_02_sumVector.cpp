#include <iostream>
using namespace std;

struct Vector
{
    int i;
    int j;
};

Vector sumVector(Vector x, Vector y)
{
    Vector sum = {(x.i + y.i), (x.j + y.j)};
    return sum;
}

int main()
{
    struct Vector v1, v2, s;  //struct Vector is like a datatype 
    v1 = {40, 5};
    v2 = {7, 8};

    s = sumVector(v1, v2);

    cout << "Sum of vectors : " << s.i << "i " << s.j << "j ";

    return 0;
}