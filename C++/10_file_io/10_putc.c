// getc and putc is used to read string from a file

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("newfile.txt", "a"); // opening newfile.txt in write mode
    fputc('b', fptr); //write the character 'b' in newfile.txt
    fclose(fptr); // close the file
    return 0;
}