#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st1, st2;
    ifstream in("10_fstream.txt");
    getline(in, st1);
    cout << st1;

    ofstream out("10_fstream.txt");
    st2 = "hello world\nWriting in a file";
    out << st2;

    return 0;
}