#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    ofstream write; // ifstream is a class to write files in the file "10_fstream1.txt" and write is a custom object to perform operations
    write.open("10_fstream1.txt");
    write << "New text writing in a file \n";
    write << "using filehandling in c++ \n";
    write.close();
    return 0;
}