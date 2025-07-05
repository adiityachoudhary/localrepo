#include <stdio.h>

int main()
{
    char s1[5];
    char s2[5];
    // using %s
    scanf("%s", s1);
    printf("%s", s1);

    // using %c
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", s2);
        fflush(stdin);
    }
    s2[5] = '\0'; // null character in the end of a character string
    printf("%c", s2);
    return 0;
}