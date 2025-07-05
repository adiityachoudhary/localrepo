#include <iostream>
#include <string.h>
using namespace std;

char *copy(char[], char[]);
char *copy(char s1[], char s2[])
{
    for (int i = 0; i < strlen(s2); i++)
    {
        s1[i] = s2[i];
    }
    s1[strlen(s2)] = '\0'; // adding the last null character to terminate the character array
    return s1;
}
int main()
{
    char source[] = "Hello";
    char target[10];
    cout << "\nValue at source: " << source;

    cout << "\nCustom copy function returns: " << copy(target, source);
    cout << "\nValue at target: " << target;
    return 0;
}