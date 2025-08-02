#include <iostream>
#include <vector> //Vector is a dynamic array from STL which adds and removes memory size as you add or remove elements
using namespace std;

int main()
{
    vector<int> v; // keyword:vector   ,  type: <integer>  ,  variable name: v
    v = {10, 20, 30};
    cout << v.size() << endl;     // no. of elements
    cout << v.capacity() << endl; // maximum capacity of the dynamic array v
   
    for (int i = 10; i < 500; i++)
    {
        v.push_back(i);
    }

    v.push_back(40); // when we add any element in the last the capacity of the array become double the size of previous capacity
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    cout << v.empty() << endl; // checks if the array is empty or not

    cout << v.front() << endl; // first element
    cout << v.back() << endl;  // last element

    v.pop_back(); // deletes last element
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.clear();                 // clears all the element from array
    cout << v.empty() << endl; // checks if the array is empty or not

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    return 0;
}