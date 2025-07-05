#include <iostream>
#include <string.h> //C standard library
using namespace std;

char *encrypt(char[]), *decrypt(char[]); // function prototyping

char *encrypt(char s1[])
{
    for (int i = 0; i < strlen(s1); i++)
    {
        s1[i] += 1;
    }
    return s1;
}
char *decrypt(char s1[])
{
    for (int i = 0; i < strlen(s1); i++)
    {
        s1[i] -= 1;
    }
    return s1;
}
int main()
{
    char str1[] = "Secret Information";
    cout <<"Value in char str1[] : "<<str1<<endl;

    cout << encrypt(str1)<<endl;
    cout << decrypt(str1)<<endl;

    return 0;
}