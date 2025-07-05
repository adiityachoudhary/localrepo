#include <iostream>
#include <string.h> //C standard library

using namespace std;
char* encrypt(char[]);
char* encrypt(char s1[])
{
    for (int i = 0; i < strlen(s1); i++)
    {
        s1[i]+=1;
    }
    return s1;
}

int main()
{
    char str1[] = "Hello World";
    cout << encrypt(str1);
    return 0;
}