/*Fibonacci series
0,1,1,2,3,5,8,13,21,34,......
Fibonacci(n)=Fibonacci(n-1)+Fibonacci(n-2)
*/
#include <iostream>
using namespace std;
int fibonacci(int);

int fibonacci(int nth_term)
{
    if (nth_term == 1 || nth_term == 2) //base case 
        return nth_term-1; //because 1st and second term is always 0 and 1 in fibonacci
    return fibonacci(nth_term - 1) + fibonacci(nth_term - 2);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout<<n<<"th term in fibonacci series is: "<<fibonacci(n);
    return 0;
}