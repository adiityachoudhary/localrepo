#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("10_01_read3integers.txt", "r"); // opening newfile.txt in write mode
    int num1, num2, num3;
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("First no. %d\nSecond no. %d\nThird no. %d", num1, num2, num3);
    fclose(ptr); // close the file
    return 0;
}