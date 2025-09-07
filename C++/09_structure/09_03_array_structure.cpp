#include <iostream>
using namespace std;

struct Vector
{
    int i;
    int j;
};


int main()
{
    struct Vector v[5];

    for (int iteration = 0; iteration < 5; iteration++)
    {
       cout<<"Enter i "<<iteration+1<<" : ";
       cin>>v[iteration].i;
       cout<<"Enter j "<<iteration+1<<" : ";
       cin>>v[iteration].j;
    }
    
    for (int iteration = 0; iteration < 5; iteration++)
    {
        cout << "Vector "<<iteration+1 <<" : { " << v[iteration].i << "i " << v[iteration].j << "j }\n";
    }


    return 0;
}