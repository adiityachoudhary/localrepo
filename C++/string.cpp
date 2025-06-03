#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    system("cls");
    string name, sname, fname;
    cout << "Enter your first name : ";
    cin >> name;
    cout << "Enter your second name : ";
    cin >> sname;
    fname = name +' '+ sname;

    cout << "Your name is - " << fname << endl<<endl;
    cout << "Length of your name is - " << fname.length() << endl;
    cout << "Name from 3rd index with 4 characters - " << fname.substr(2, 3) << endl;
    cout << "First three letters of your name - " << fname.substr(0, 3) << endl;
    return 0;
}