/*
// An Armstrong number (also known as a narcissistic number) is a number
// that is equal to the sum of its own digits each raised to the power
// of the number of digits.
//
// For example:
// 153 is an Armstrong number because:
// 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
*/

#include <iostream>
#include <cmath>

using namespace std;
void armstrong(int); // fuction prototype
int digits(int);     // fuction prototype

void armstrong(int n)
{
    int original_no = n;          // original no. of digits stored in original_no variable
    int no_of_digits = digits(n); // no. of digits stored in no_of_digits variable
    int last_digit, sum = 0;

    for (int i = 0; i < no_of_digits; i++)
    {
        last_digit = n % 10;
        sum = sum + (pow(last_digit, no_of_digits));
        n = n / 10;
    }

    if (sum == original_no) // check if its an armstrong no or not
        cout <<"Yes, "<<sum<<" is an Armstrong No.";
    else
        cout <<"No, "<<sum<<" is not an Armstrong No.";
}

inline int digits(int n) // digit counter function
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int num = 9474;
    armstrong(num);

    return 0;
}