#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    srand(time(0)); int i = rand() % 5 + 1; // random no. between 5 to 1
    
    cout << i;
    return 0;
}
