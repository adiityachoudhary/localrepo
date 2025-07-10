#include <iostream>
using namespace std;

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
    
    myArray(struct myArray *a, int tsize, int usize)
    {
        // (*a).total_size = tsize;
        // (*a).used_size = usize;
        // (*a).ptr = (int *)malloc(tsize * sizeof(int));

        a->total_size = tsize;
        a->used_size = usize;
        a->ptr = new int[tsize];
    }
    ~myArray()
    {
        delete[] ptr;
    }
};
void display(struct myArray *a)
{
    for (int i = 0; i < 3; i++)
    {
        cout << a->ptr[i] << endl;
    }
}
int main()
{
    struct myArray marks(&marks, 10, 2);

    marks.ptr[0] = 25;
    marks.ptr[1] = 55;
    marks.ptr[2] = 75;

    display(&marks);
    return 0;
}