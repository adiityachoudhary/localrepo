#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

/*| Character Type | Range in ASCII | ASCII Value |
| -------------- | -------------- | ----------- |
| Uppercase A-Z  | `'A'` to `'Z'` | 65 to 90    |
| Lowercase a-z  | `'a'` to `'z'` | 97 to 122   |

Uppercase to Lowercase
Every lowercase letter is +32 from its uppercase equivalent.

Lowercase to Uppercase
Every uppercase letter is -32 from its lowercase equivalent. */

int main()
{
    system("cls");
    char c;
    cout << "Enter your Character: ";
    cin >> c;
    if (c >= 65 && c <= 90)
    {
        c += 32;
        cout << "Your character in Lowercase: " << c;
    }
    else if (c >= 97 && c <= 122)
    {
        c -= 32;
        cout << "Your character in Uppercase: " << c;
    }

    return 0;
}