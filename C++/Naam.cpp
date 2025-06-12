#include <iostream>
using namespace std;
int main()
{
    int n, again;

    do
    {
        cout << "NAAM JAAP: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << " RADHA RADHA ";
        }
        cout << "\nPRESS 1 FOR AGAIN : ";
        cin >> again;
    } while (again == 1);

    return 0;
}