// "r"   -> open for reading
// "rb"  -> open for reading in binary
// "w"   -> open for writing // If the file exists, the contents will be overwritten
// "wb"  -> open for writing in binary
// "a"   -> open for append // If the file does not exist, it will be created


// write mode deletes the previous text and then overwrite in the file
//but in append mode it writes in the end of the file
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("newfile.txt", "w"); // opening newfile.txt in write mode
    int num = 1234;
    fprintf(fptr,"%d",num);
    fclose(fptr); // close the file
    return 0;
}