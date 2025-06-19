#include<iostream>
using namespace std;
 
// a,++a,a++   --> this will give 6,6,4 instead of 4,5,5  
//because of evaluation order is rigth to left
//operator precedence of a++ is higher than ++a

int main()
{
    int a=4, b=10;
    cout<<a<<","<<++a<<","<<a++<<endl; 

    //but if executed separately it will give the output
    cout<<b<<",";
    cout<<++b<<",";
    cout<<b++<<endl;


    return 0;                    
                                 
}