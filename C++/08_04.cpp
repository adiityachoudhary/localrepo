#include <iostream>
using namespace std;

char* slice(char*, int, int);
char* slice(char* str, int m, int n)
{
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str=ptr1;
    str[n] = '\0';
    return str;
}

int main()
{
    char s1[] = "Hello World";
    cout << slice(s1, 6, 10);
    return 0;
}