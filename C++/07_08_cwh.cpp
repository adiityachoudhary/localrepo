#include <iostream>
using namespace std;

int main()
{
    int a[3][10], table[3];

    // calculate table
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Table "<<i+1<<" : "; //after every iteration of i this will ask for next table no.
        cin >> table[i];

        for (int j = 0; j < 10; j++)
        {
            a[i][j] = (j + 1) * table[i];
        }
    }

    // printing table
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}