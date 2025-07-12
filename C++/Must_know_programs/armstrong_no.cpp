#include <iostream>
using namespace std;

int main()
{
    int num = 153, last_digit, s = 0;

    for (int i = 0; i < 3; i++)
    {
        last_digit = num % 10;
        s = s + (last_digit*last_digit*last_digit);
        num = num / 10;
    }
    cout << s;

    return 0;
}