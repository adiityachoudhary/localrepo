#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {

        if (i == 3 || i == 4) 
            continue; // skip this iteration now (if i=7 or i=9)

        cout << "i is " << i << endl;
    }

    return 0;
}