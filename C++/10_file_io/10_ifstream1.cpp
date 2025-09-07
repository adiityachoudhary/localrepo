#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("cls");
    string s;
    ifstream read; // ifstream is a class to read files from the "file 10_fstream1.txt" and read is a custom object to perform operations

    read.open("10_fstream_io_.txt"); //file open
    while (read.eof() == 0) //reding the file till eof(end of file)
    {
        getline(read, s);
        cout << s<<endl;
    }
    read.close();
    return 0;
}