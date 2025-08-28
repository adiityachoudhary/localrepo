#include <iostream>
using namespace std;

class Operation
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
};

class Input : private Operation
{
public:
    int fun1(int x, int y)
    {
        return sum(x, y);
    }
};
int main()
{
    Input obj1;
    int s = obj1.fun1(15, 10);
    cout << s;
    return 0;
}