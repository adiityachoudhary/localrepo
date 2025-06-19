// Program to convert celcius to fahrenheit

#include <iostream>
using namespace std;

float force(float);

float force(float mass)
{
    return mass*9.8;
}

int main()
{
    system("cls");
    float mass;
    cout << "Enter mass: ";
    cin >> mass;

    cout << "Force : "<<force(mass)<<" Nm";
    
    return 0;
}
