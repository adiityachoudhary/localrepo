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
void armstrong_printer(int); // fuction prototype
inline int digits(int);      // fuction prototype
inline int digits(int n)     // digit counter function
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

void armstrong_printer(int n)
{
    int k = 1;
    while (k <= n)
    {
        int original_no = k;          // original no. of digits stored in original_no variable
        int no_of_digits = digits(k); // no. of digits stored in no_of_digits variable
        int last_digit, sum = 0;
        int temp = k;

        for (int i = 0; i < no_of_digits; i++)
        {
            last_digit = temp % 10;
            sum += (pow(last_digit, no_of_digits));
            temp /= 10;
        }

        if (sum == original_no) // check if its an armstrong no or not
            cout << sum << ", ";
        k++;
    }
}

int main()
{
    armstrong_printer(200);
    return 0;
}