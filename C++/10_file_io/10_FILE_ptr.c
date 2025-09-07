// "r"   -> open for reading
// "rb"  -> open for reading in binary
// "w"   -> open for writing // If the file exists, the contents will be overwritten
// "wb"  -> open for writing in binary
// "a"   -> open for append // If the file does not exist, it will be created

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("newfile.txt", "r"); // opening newfile.txt in read mode

    if (ptr == NULL)
    {
        printf("newfile.txt does not exist!!");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num); // reading from newfile.txt
        printf("Value of num : %d\n", num);
        fscanf(ptr, "%d", &num); // reading from newfile.txt
        printf("Value of num : %d\n", num);
        fscanf(ptr, "%d", &num); // reading from newfile.txt
        printf("Value of num : %d\n", num);
        fscanf(ptr, "%d", &num); // reading from newfile.txt
        printf("Value of num : %d\n", num);
        fclose(ptr); // close the file
    }
    return 0;
}