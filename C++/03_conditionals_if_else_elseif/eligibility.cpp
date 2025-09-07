#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("cls");
    int stream, marks;
    cout << "Career Counseling\n\n";
    cout << "Choose your stream in 12th\n";

    cout << "1.Science (PCM)\n";
    cout << "2.Commerce (Accounts)\n";
    cout << "3.Arts\n";
    cout << "Enter your stream (1-3): ";
    cin >> stream;
    system("cls");

    if (stream == 1)
    {
        cout << "Enter your Marks in % in 12th(PCM): ";
        cin >> marks;
        if (marks >= 90)
            cout << "\nCongrats you're eligible for Engineering\n\n";
        else
            cout << "You're not eligible for Engineering\n";
    }
    else if (stream == 2)
    {
        cout << "Enter your Marks in % in 12th(Commerce): ";
        cin >> marks;
        if (marks >= 90)
            cout << "\nCongrats you're eligible for B.com\n";
        else
            cout << "You're not eligible for B.com\n";
    }
    else if (stream == 3)
    {
        cout << "Enter your Marks in % in 12th(Arts): ";
        cin >> marks;
        if (marks >= 90)
            cout << "\nCongrats you're eligible for B.A. in JNU\n";
        else
            cout << "You're not eligible for B.A. in JNU\n";
    }
    else
        cout << "                OOPS!!\n";
        cout << "           Invalid option!!\n";
        cout << "            Try Again or\n";
        cout << "Choose a suitable course on your own!!\n";
    cin.ignore();
    cin.get();
    return 0;
}
