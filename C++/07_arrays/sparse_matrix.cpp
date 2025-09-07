#include <iostream>
using namespace std;

int main()
{
    int a[3][3], zero = 0, non_zero = 0;
    a[0][0] = 0;
    a[0][1] = 0;
    a[0][2] = 5;
    a[1][0] = 4;
    a[1][1] = 0;
    a[1][2] = 9;
    a[2][0] = 0;
    a[2][1] = 3;
    a[2][2] = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
                zero++;
            else
                non_zero++;
        }
    }

    int s[non_zero][3]; // sparse matrix declared with rows and columns(i,j,values)
    if (zero > non_zero)
    {
        // saving non zero elements in a new matrix s[][]
        int k = 0; // index for sparse matrix
        cout << "Its a Sparse Matrix\n";
        for (int i = 0; i < non_zero; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (a[i][j] != 0)
                {
                    s[k][0] = i;
                    s[k][1] = j;
                    s[k][2] = a[i][j];
                    k++;
                }
            }
        }

        // displaying non zero elements from matrix s[][]
        cout << "Displaying Sparse Matrix:\n";
        cout << "\nRow\tColumn\tValue\n";
        cout << "----------------------" << endl;
        for (int i = 0; i < non_zero; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << s[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
        cout << "Its not a Sparse Matrix";

    return 0;
}