#include <iostream>
using namespace std;

int sum(int);

/* RECURSIVE SUM
sum(6)=1+2+3+4+5+6
sum(5)=1+2+3+4+5
sum(4)=1+2+3+4
sum(3)=1+2+3
sum(2)=1+2

sum(n)=1+2+3+.....(n-1)+n
sum(n-1)=1+2+3+....(n-1)

therefore -->  sum(n)= sum(n-1) + n


*/
int sum(int n)
{
    if (n < 0)
        return 0;
    else
        return sum(n - 1) + n;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of " << n << " natural no.: " << sum(n);

    return 0;
}