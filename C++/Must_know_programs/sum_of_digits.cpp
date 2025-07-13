#include <iostream>
using namespace std;
int digit_counter(int), sumofdigits(int);
int digit_counter(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int sumofdigits(int n)
{
    int sum = 0;
    int d = digit_counter(n);
    for (int i = 0; i < d; i++)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    int num;
    cout << "Enter a no.: ";
    cin >> num;
    cout << "Sum of digits of " << sumofdigits(num);

    return 0;
}