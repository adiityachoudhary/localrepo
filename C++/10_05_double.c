#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    //read operation
    ptr = fopen("10_05_double.txt", "r");

    fscanf(ptr, "%d", &num); // read from file

    fclose(ptr);

    //write operation
    ptr = fopen("10_05_double.txt", "w");

    fprintf(ptr, "%d", num * 2); // write to file

    fclose(ptr);
    return 0;
}