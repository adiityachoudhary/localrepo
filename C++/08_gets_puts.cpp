#include <iostream>
using namespace std;

int main()
{
    char st[10];
    cout << "Enter your string: ";
    gets(st);  //works same as getline(cin,st);  i.e. accepts multiple strings
    // puts(st);      //works same as getline(cin,st) and move cursor to next line;  i.e. accepts multiple strings
  
    cout << st;

    return 0;
}