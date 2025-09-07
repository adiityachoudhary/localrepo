#include <iostream>
using namespace std;

// typedef struct

typedef struct
{
    float real;
    float img;
} ComplexNo; // now emp is a struct data type

int main()
{
    ComplexNo c1, c2; // typedef struct datatype emp
    c1 = {50, 45.635};
    c2 = {75, 3.141};
    cout << c1.real<<" "<<c1.img<<"i"<< endl; //complex no. is a+bi  where a is real and b is imaginary
    cout << c2.real<<" "<<c2.img<<"i"<< endl;

    return 0;
}