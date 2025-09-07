#include <iostream>
using namespace std;

void printArray(int a[], int n), reverse(int arr[], int n);

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}

void reverse(int arr[], int n)
{
    /*
    {1, 2, 3, 4, 5, 6};
     0  1  2  3  4  5       ---index
     0 <----------> 5       ---swap index
     i           [n-i-1]

    {1, 2, 3, 4, 5, 6};
     0  1  2  3  4  5       ---index
        1 <----> 4          ---swap index
        i     [n-i-1]

    for  i from 0 to n/2
     arr[i] arr[n-i-1]
     */

    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}
