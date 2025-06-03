#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    system("cls"); // Clear screen (only on Windows)
    int a,b,c;
    cout<<"Enter two numbers to find the greatest\n";
    cout<<"First no.: ";
    cin>>a;
    cout<<"Second no.: ";
    cin>>b;

    c=(a>b?a:b); //greatest no. logic using TERNARY operator [(condition)? if True: if FALSE]

    system("cls");
    cout<<c<<" is greatest among "<<a<<" and "<<b;

    cin.ignore(); // Clear newline from buffer
    cin.get();    // Optional pause (user presses Enter)
    return 0;
}
