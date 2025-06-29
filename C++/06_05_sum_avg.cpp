#include <iostream>
using namespace std;
int *sum(int, int);
float *average(int, int);

int *sum(int x, int y)
{
    int s = x + y;
    int *p1 = &s;
    return p1;
}
float *average(int x, int y)
{
    float avg = (x + y) / 2.0;
    float *p2 = &avg;
    return p2;
}

int main()
{
    int a = 18, b = 15;
    
    cout << "Sum of " << a << " and " << b << " is " << *sum(a, b) << endl;
    cout << "Sum of " << a << " and " << b << " is " << *average(a, b);

    return 0;
}