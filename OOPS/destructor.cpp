/*A destructor is a special member fuction in a class that is automatically called
when an object goes out of scope or is deleted
it is used to release resources like memory, files or network connections.
Same name sas class but with a tilde sign ~(tilde)
Automatically called when object is destroyed
only one destructor per class
no overloading is allowed

#destructor destroys in reverse order 
like if d1,d2,d3 is called and finished its operation then destructor d3 then d2 then d1 will be called
*/

#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Parameterized Constructor has been called\n";
    }

    ~Demo()
    {
        cout << "Constructor is destroyed\n";
    }
};

int main()
{
    Demo d1, d2, d3;
    return 0;
}