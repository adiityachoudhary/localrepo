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
    string c;
    cout << "Enter your Name: ";
    cin >> c;

    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
            c[i] -= 32; // Uppercase to Lowercase  A+32=a 
                        // Lowercase to Uppercase  a-32=A 
    }
    cout << c;
    cin.get();
    return 0;
}