#include <iostream>
using namespace std;

int main()
{
    char st[] = {'A', 'D', 'I', 'T', 'Y', 'A', '\0'}; // this is a character array
    cout << st << endl;                               // this prints st[] character array from index 0
    cout << st[0] << endl;                            // this prints st[] character array at index st[n]
    cout << st[1] << endl;                            // this prints st[] character array at index st[n]
    cout << st[2] << endl;                            // this prints st[] character array at index st[n]

    char c[] = "hello";  //double quotes also stores string
    cout<<c<<endl;
    cout << st[3] << endl; // this prints st[] character array at index st[n]

    string s = "New string";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    cout<<s[4];

    return 0;
}