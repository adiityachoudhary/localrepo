#include <iostream>
using namespace std;

int main()
{
    int array[] = {34, 234, 45, 324, 5, 34, 52, 76, 8, 99, 8, 7, 46, 4, 6};
    int size_in_bytes, no_of_elements;
    size_in_bytes = sizeof(array);
    no_of_elements = size_in_bytes / sizeof(array[0]); // each element of int is of 4 bytes
                                                       // therefore no_of_element=(total_size)/size_of_each_element

    cout << "Size of array[5] in bytes: " << size_in_bytes << endl;
    cout << "Number of elements in array[5]: " << no_of_elements << endl;

    return 0;
}