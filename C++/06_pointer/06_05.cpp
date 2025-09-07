#include <iostream>
using namespace std;
void sum_avg(float *, float *);

void sum_avg(float *a, float *b)
{
    *a += *b;         // sum a=a+b
    *b = *a / 2.0;    // average b=(a+b)/2
}

int main()
{
    float a = 4, b = 9.58;
    sum_avg(&a, &b);

    cout << "Sum : " << a << endl;
    cout << "Average : " << b;
    return 0;
}