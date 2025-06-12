#include <iostream>
using namespace std;

int main()
{
    int n, reverse_no = 0, last_digit;
    cout << "Enter n : ";
    cin >> n;

    while (n != 0)
    {
        last_digit = n % 10;                         // extracts the last digit
        reverse_no = (reverse_no * 10) + last_digit; // stores the reversed no. in reverse_no
        n = n / 10;                                  // remove the last digit fron the no. you've entered
    }

    cout << reverse_no;
    cin.ignore();
    cin.get();
    return 0;
}