#include <iostream>
using namespace std;

/*
factorial(5)=1x2x3x4x5
factorial(4)=1x2x3x4
factorial(3)=1x2x3
factorial(2)=1x2
factorial(1)=1
factorial(0)=1

factorial(n)=1x2x3x4x......(n-1) x n
factorial(n-1)=1x2x3x4x......(n-1)

therefore: factorial(n)= factorial(n-1) x n

*/
int factorial(int);

int factorial(int a) // Recursive function
{
    if (a == 0 || a == 1) // Base condition must be always added in recursion to prevent infinite loop
        return 1;         // return1; breaks the fuction and returns to main
    else
        return a * factorial(a - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Factorial of " << n << " is: " << factorial(n);
    return 0;
}