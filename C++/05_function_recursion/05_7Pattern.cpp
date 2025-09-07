/*Pattern:-
*
***
*****

for iteration of i=0 --> j=1
for iteration of i=1 --> j=3
for iteration of i=2 --> j=5

therefore j=2*i+1
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    system("cls");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            // for iteration of i=0 prints 1 star --> j=1
            // for iteration of i=1 prints 3 star --> j=3
            // for iteration of i=2 prints 5 star --> j=5
            // therefore j=2*i+1
            
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}