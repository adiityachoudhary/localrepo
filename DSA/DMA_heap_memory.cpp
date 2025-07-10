#include <iostream>
using namespace std;
int main()
{
    int *num = new int(505); //new keyword to dynamically allocate memory
    cout<<"num: "<<*num<<endl;
    delete num; //delete keyword to dynamically deallocate memory

    int size = 3;
    int *ptr = new int[size]; // DMA array of size 5
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    for (int i = 0; i < size; i++)
    {
        cout << "Element in ptr[" << i << "]: " << ptr[i] << endl;
    }
    delete[] ptr; // deallocating the memory from array of size 5
    return 0;
}