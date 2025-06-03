#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    switch (age)
    {
        case 18:
        cout << "You can vote"<<endl;
        break;

    case 17:
        cout << "You can vote next year\n";
        break;

    case 16:
        cout << "You are 16 \n";
        break;

    case 15:
        cout << "You are 15 \n";
        break;

    default:
        cout << "You are not eligible" << endl;
    }
}