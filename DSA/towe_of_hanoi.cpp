#include <iostream>
using namespace std;
void toh(int, int, int, int);
void toh(int n, int a, int b, int c)
{
    if (n > 0)
    {
        toh(n - 1, a, c, b);
        cout << "Move a disc from tower " << a << " to " << c << endl;
        toh(n - 1, b, a, c);
    }
}

int main()
{
    int no_of_discs = 3;
    int from_tower = 1;
    int using_tower = 2;
    int to_tower = 3;

    toh(no_of_discs, from_tower, using_tower, to_tower);
    return 0;
}