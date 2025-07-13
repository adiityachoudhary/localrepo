#include <iostream>
using namespace std;
int reverse(int), digit_counter(int); // function prototype
int digit_counter(int n)              // digit counter function
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int reverse(int n) // reverse a no function
{
    int d = digit_counter(n);
    int rev = 0;
    for (int i = 0; i < d; i++)
    {
        rev = (rev * 10) + (n % 10); // 123 ==> (0*10)+ (123%10) ==> (3*10)+(12%10)  ==> (32*10)+(1%10)
        n /= 10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter any no to reverse it: ";
    cin >> num;
    cout << reverse(num);
    return 0;
}