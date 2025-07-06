#include <iostream>
using namespace std;

// typedef structure
typedef struct
{
    float real;
    float img;
} ComplexNo; // ComplexNo is now a struct data type

void display(ComplexNo x[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Complex no. " << i + 1 << " : " << x[i].img << "+" << x[i].real << "i\n";
    }
}

int main()
{
    ComplexNo c[5]; // typedef struct datatype emp
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter c" << i + 1 << " int : ";
        cin >> c[i].img;
        cout << "Enter c" << i + 1 << " float : ";
        cin >> c[i].real;
    }
    display(c);

    return 0;
}