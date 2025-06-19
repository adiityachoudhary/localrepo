/*Fibonacci series
0,1,1,2,3,5,8,13,21,34,......
Fibonacci(n)=Fibonacci(n-1)+Fibonacci(n-2)
*/

#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c;
    cout << "Enter n: ";
    cin >> n;

    cout << a;

    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b; //swap
        b = c; //swap
        cout <<","<< a;
    }
    return 0;
}