#include <iostream>
using namespace std;

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;

    myArray(struct myArray *a, int tsize, int usize)
    {
        (*a).total_size = tsize;
        (*a).used_size = usize;
        (*a).ptr = (int *)malloc(tsize * sizeof(int));
    }
};

int main()
{
    struct myArray(&marks, 10, 5);

    marks.ptr[0] = 25;
    marks.ptr[1] = 55;
    marks.ptr[2] = 75;
    marks.ptr[3] = 45;
    marks.ptr[4] = 35;

    for (int i = 0; i < 5; i++)
    {
        cout << marks.ptr[i] << endl;
    }

    return 0;
}