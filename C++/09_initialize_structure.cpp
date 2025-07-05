#include <iostream>
using namespace std;

// details of 3 employees using structure array
struct employee
{
    int code; // this declares an new user defined data type
    string name;
    int salary;
}; // semicolon is important

int main()
{
    employee harry={123,"Harry Bhai",50000}; // initializing structures
    employee coder={001,"Apna College",60000};
    cout<<harry.code<<", "<<harry.name<<", "<<harry.salary<<endl;
    cout<<coder.code<<", "<<coder.name<<", "<<coder.salary;
    return 0;
}