#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i = 1;
    while (1 < 10)
    {
        cout << "Value of i : " << i<<endl;
        i++;
        break;//remove break to run infinite loop
    }
    return 0;
}

//to stop Terminal press CTRL+C