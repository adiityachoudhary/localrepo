#include <iostream>
using namespace std;

float force(float);

float force(float mass)
{
    float force = mass*9.8;
    return force;
}

int main()
{
    float mass;
    cout << "Enter mass: ";
    cin >> mass;

    cout << "Force : "<<force(mass)<<" Nm";
    
    return 0;
}