#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st1, st2;
    ofstream write("10_fstream.txt"); // writing in a file
    cout << "Enter your name: ";
    getline(cin, st1);
    write << "Your name is : " << st1;
    write.close();

    ifstream read("10_fstream.txt"); // reading from a file
    getline(read, st2);
    cout << st2;
    return 0;
}