#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
    system("cls"); // Clear screen (only on Windows)

    string name;
    int age, phone;
    cout << "Enter Your details: \n";
    cout << "Name: ";
    cin.ignore(); //agar iske pehle cin>>name use hua hai to blankspace ko ignore karne ke liye cin.ignore(); use  kiye hain
    getline(cin, name);  // this will store the full name with blankspace in variable name with blankspace
    cout << "Age: ";
    cin >> age;
    cout << "Phone: ";
    cin >> phone;

    system("cls"); // Clear screen (only on Windows)

    cout << "Hello " << name << " !" << endl
         << "Your age is " << age << endl
         << "Your phone no. is  " << phone << endl;
    cin.ignore(); // Clear newline from buffer
    cin.get();    // Optional pause (user presses Enter)
    return 0;
}
