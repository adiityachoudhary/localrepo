/*
n=12345  count =0
n=n/10;  ==> 12345/10   ==> 1234.5 (due to data type int it is considered as 1234)  
                                                        ==>count=1 (due to count++)
n=12345/10      ==> n=1234      (n>0= true)             ==>count=2  
n=1234/10       ==> n=123       (n>0= true)             ==>count=3
n=123/10        ==> n=12        (n>0= true)             ==>count=4
n=12/10         ==> n=1         (n>0= true)             ==>count=5
n=1/10          ==> n=0         (n>0= false)         loop terminated

count=5
no of digits= count = 5
*/
#include <iostream>
using namespace std;
void digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    cout << "No. of digits: " << count;
}
int main()
{
    int num;
    cout << "Enter any no. to count its digit: ";
    cin >> num;
    digits(num);

    return 0;
}