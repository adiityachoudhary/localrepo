// program to take details as input from user and save it in a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int roll;
    string name, course, s;
    char yes_no;

    ofstream write;
    write.open("10_fstream_io_.txt");
    cout << "Enter your Roll: ";
    cin >> roll;
    write << "ROLL NO.: " << roll<<endl;

    cout << "Enter your Name: ";
    cin >> name;
    write << "NAME: " << name<<endl;

    cout << "Enter your Course: ";
    cin >> course;
    write << "COURSE.: " << course<<endl;

    write.close();

    cout << "Do you want to see the details y/n: ";
    cin >> yes_no;
    if (yes_no == 'y')
    {
        ifstream read("10_fstream_io_.txt");
        while (read.eof() == 0)
        {
            getline(read, s);
            cout << s << endl;
        }
        read.close();
    }
    return 0;
}