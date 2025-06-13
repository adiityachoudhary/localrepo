#include <iostream>
using namespace std;

float temp(float);

float temp(float t)
{
    t = (t * 1.8) + 32;
    return t;
}

int main()
{
    float t;
    cout << "Enter Temperature in C: ";
    cin >> t;

    cout << "Temperature in F: "<<temp(t);
    
    return 0;
}