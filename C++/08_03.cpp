#include <iostream>
using namespace std;

int mylength(char[]);

int mylength(char str[])
{
    int i = 0, count;
    char c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    return count = i - 1;
}

int main()
{
    char s1[] = "Hello World";
    cout << mylength(s1);
    return 0;
}