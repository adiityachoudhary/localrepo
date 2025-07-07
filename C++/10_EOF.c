// getc and putc is used to read string from a file

#include <stdio.h>
int main()
{
    char ch;
    FILE *fptr;
    fptr = fopen("10_EOF.txt", "r"); // opening newfile.txt in write mode
    while (1)
    {
        ch = fgetc(fptr); //when all the content of the file has been read the break the loop
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
            fclose(fptr); // close the file
        }
    }
    return 0;
}