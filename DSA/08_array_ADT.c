#include <stdio.h>
#include <stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}
void set(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter value at marks.ptr[%d]: ", i);
        scanf("%d", &a->ptr[i]);
    }
}
void get(struct myArray *a)
{
    {
        for (int i = 0; i < a->used_size; i++)
        {
            printf("marks.ptr[%d]: %d\n", i, a->ptr[i]);
        }
    }
}

int main()
{
    struct myArray marks;      // asbstract data type i.e. structure with a pointer , it's total size and its used size
    createArray(&marks, 5, 2); // creating array in structure marks
    set(&marks);               // set the values in structure marks
    get(&marks);               // display the values from structure marks

    return 0;
}