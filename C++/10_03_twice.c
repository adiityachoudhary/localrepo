#include <stdio.h>
char printfile(FILE *,FILE *);
char printfile(FILE *fptr,FILE *fptr2)
{
    char ch;
    while (1)
    {
        ch = fgetc(fptr);
        if (ch == EOF)
        {
            break;
        }
        fprintf(fptr2,"%c", ch);
        fprintf(fptr2,"%c", ch);
    }
}

int main()
{
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("10_03_twice.txt", "r");      // opening newfile.txt in write mode
    ptr2 = fopen("10_03_twice_new.txt", "a"); // opening newfile.txt in write mode

    printfile(ptr,ptr2); //custom function to print twice character in a new file

    fclose(ptr); // close the file
    return 0;
}