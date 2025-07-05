#include <iostream>
using namespace std;

int main()
{
    char st[] = {'A', 'D', 'I', 'T', 'Y', 'A', '\0'};  // this is a character array
    cout << "Charcter at index 0 : " << st[0] << endl; // this prints st[] character array at index st[n]
    cout << "Charcter at index 1 : " << st[1] << endl;
    cout << "Charcter at index 2 : " << st[2] << endl;

    for (int i = 0; i < sizeof(st) / sizeof(st[0]); i++)
    {
        cout << st[i];
    }
    cout << endl;

    cout << "without for loop: "<<st << endl; // this prints st[] character array from index 0

    char c[] = "hello"; // this is same as char st[] = {'A', 'D', 'I', 'T', 'Y', 'A', '\0'};
    cout << c << endl;

    cout << st[3] << endl; // this prints st[] character array at index st[n]

    string s = "New string"; // this is same as char st[] = {'A', 'D', 'I', 'T', 'Y', 'A', '\0'};
    cout <<"String in C++ "<< s << endl;
    cout <<"length() in C++ "<< s.length() << endl;
    cout <<"String[4] in C++ "<< s[4];

    return 0;
}