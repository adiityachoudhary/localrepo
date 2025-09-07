#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        cout << "i is " << i << endl;
        if (i == 5)
            break; //exit the loop now
    }
    cout << "break is executed";

    return 0;
}