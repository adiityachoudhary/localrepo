#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **t = &p;
    
    cout << "Value of &i : " << &i<<endl;
    cout << "Value of *t : " << *t << endl;
    cout << "Value of p : " << p << endl;
    cout << "Value of &p : " << &p << endl;
   
    cout << "Value of &t : " << &t << endl;
    
    cout << "Value of i : " << i << endl;
    cout << "Value of *p : " << *p << endl;
    cout << "Value of **t : " << **t << endl;

    return 0;
}