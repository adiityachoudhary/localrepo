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
    cout << c1.img<<" "<<c1.real<< endl;
    cout << c2.img<<" "<<c2.real<< endl;

    return 0;
}