#include <iostream>
using namespace std;

int main()
{
    int s[3] = {1, 2, 3};
    cout <<"Value at address *(s+0) : "<<*(s+0)<<endl;
    cout <<"Value at address *(s+1) : "<<*(s+1)<<endl;
    cout <<"Value at address *(s+2) : "<<*(s+2)<<endl;
    cout <<"Value at address *(s+3) : "<<*(s+3)<<endl;  //4th element

    return 0;
}
