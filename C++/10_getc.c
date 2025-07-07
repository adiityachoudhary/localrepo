// getc and putc is used to read string from a file

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("newfile.txt", "r"); // opening newfile.txt in write mode
    char c = fgetc(fptr); //read the character in newfile.txt
    printf("%c", c);
    fclose(fptr); // close the file
    return 0;
}