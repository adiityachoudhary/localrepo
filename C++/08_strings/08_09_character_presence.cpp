#include <iostream>
#include <string.h> //C standard library

using namespace std;
bool char_present(char[], char);
bool char_present(char s1[], char c)
{
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == c)
            return true;
    }
    return false;
}

int main()
{
    char str1[] = "Hello World";
    char ch;
    cout << "Enter a character to find char_present : ";
    cin >> ch;

    if (char_present(str1,ch))
        cout << "Yes, '" << ch << "' is present in " << str1;
    else
        cout << "No, '" << ch << "' is not present in " << str1;
    return 0;
}