#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("10_02_table.txt", "w"); // opening newfile.txt in write mode

    int n;
    printf("Enter table no.: ");
    scanf("%d",&n);
    fprintf(ptr,"Table of %d\n",n);

    for (int i = 0; i < 10; i++)
    {
        // num[i]=(i+1)*n;
        fprintf(ptr,"%d x %d = %d\n",n,(i+1), (i+1)*n);
    }
    
  
    fclose(ptr); // close the file
    return 0;
}