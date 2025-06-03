#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter first no.: \n";
    cin>>a;
    cout<<"Enter second no.: \n";
    cin>>b;
    cout<<"a+b: "<<a+b<<endl;
    cout<<"a-b: "<<a-b<<endl;
    cout<<"a*b: "<<a*b<<endl;
    cout<<"a/b: "<<(float) a/b<<endl; //typecasting from integer to float
    cout<<"a%b: "<<a%b<<endl;
    return 0;
}