#include <iostream>
using namespace std;
bool palindrome(int);
int digit_counter(int);  // function prototype
int digit_counter(int n) // digit counter function
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
bool palindrome(int n) // palindrome a no function
{
    int d = digit_counter(n);
    int rev = 0;
    int original_no = n;
    for (int i = 0; i < d; i++)
    {
        rev = (rev * 10) + (n % 10); // 123 ==> (0*10)+ (123%10) ==> (3*10)+(12%10)  ==> (32*10)+(1%10)
        n /= 10;
    }
    if (rev == original_no)
        return true;
    return false;
}

int main()
{
    int num;
    cout << "Enter any no to palindrome it: ";
    cin >> num;
    if (palindrome(num))
        cout << "Yes, " << num << " is a Palindrome no.";
    else
        cout << "No, " << num << " is not a Palindrome no.";

    return 0;
}