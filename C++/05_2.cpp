// Program to convert celcius to fahrenheit

#include <iostream>
using namespace std;

float temp(float); // function prototyping

float temp(float t)
{
    return (t * 1.8) + 32;
}

int main()
{
    float t;
    cout << "Enter Temperature in C: ";
    cin >> t;

    cout << "Temperature in F: "<<temp(t);
    
    return 0;
}