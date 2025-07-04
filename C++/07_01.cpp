#include<iostream>
using namespace std;
 
int main()
{
    int array[10]={5,47,56,2,4,7,8,9,3,1};
    int * ptr=array;//ptr pointing to the first element of array[10]
    cout<<"Output of ptr+2 is "<<*(ptr+2)<<endl;
    cout<<"3rd element of array[] is "<<array[2];

    return 0;
}