#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    string name;
    cout << "Enter your Friend's name: ";
    cin >> name;
    
    if (name == "Prakash" || name == "prakash" || name == "pk"|| name == "Pk"|| name == "PK")
    {
        cout <<name<< " is a Diplomatic piece of shit \nin short Dogla hai sala :)\n";
    }
    else if (name == "Aniket" || name == "aniket")
    {
        cout <<name<< " is a lazy piece of shit \nin short suar hai sala :)\n";
    }
    else
        cout <<name<< " is nice\n";

    return 0;
}