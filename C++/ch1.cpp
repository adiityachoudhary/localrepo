#include <iostream>
#include <cstdlib>
// #define PI 3.14159 macros are usually defined in capital letters but this is an old method we use const int instead of macros
using namespace std;

int area(),vol(),cf(),si();  //funtion prototyping

int area()
{
    system("cls"); // system("cls") ke pahle wala sab clear ho jayega
    int c;
    double l, b, r;
    const float pi = 3.14159; // Switch-CASE ke andar kabhi variable decalre nhi hote hain.........error dega wo

    cout << "Area of:- \n";
    cout << "1. Rectangle\n";
    cout << "2. Circle\n";
    cout << "Enter your choice (1/2): ";
    cin >> c;

    switch (c)
    {
    case 1:
        system("cls");
        cout << "Enter Length :";
        cin >> l;
        cout << "Enter Breadth :";
        cin >> b;
        cout << "Area of rectangle is " << l * b;
        break;

    case 2:
        system("cls");
        cout << "Area of Circle\n";
        cout << "Enter Radius of circle: ";
        cin >> r;
        cout << "Area of circle of raidus " << r << " is: " << pi * r * r;
        break;

    default:
        cout << "Invalid choice";
        break;
    }
    return 0;
}
int vol()
{
    double pi = 3.14159, r, h;
    cout << "Enter radius of cylinder: ";
    cin >> r;
    cout << "Enter height of cylinder: ";
    cin >> h;
    cout << "Volume of Cylinder is : " << (pi * r * r * h);
    return 0;
}
int cf()
{
    float c, f;
    cout << "Enter Celsius to convert into Fahrenheit: ";
    cin >> c;
    f = ((c * 1.8) + 32);
    cout << c << " Celsius into Fahrenheit will be: " << f << endl;
    if (c > 38)
        cout << "You have FEVER";
    else
        cout << "Your body temperature is normal";

    return 0;
}
int si()
{
    double p, r, t, i;
    cout << "Enter Principal amount: ";
    cin >> p;
    cout << "Enter Rate %: ";
    cin >> r;
    cout << "Enter Time in years: ";
    cin >> t;
    i = (p * r * t) / 100;
    cout << "Simple interest is " << i << endl;
    cout << "Total amount is " << p + i;
    return 0;
}

int main()
{
    system("cls");
    int choice;
    char again;

    do
    {

        cout << "1. To Calculate area\n";
        cout << "2. To Calculate volume\n";
        cout << "3. To Convert Celsius to Farenheit\n";
        cout << "4. To Calculate Simple Interest\n";
        cout << "5. Exit the program\n";

        cout << "Enter number as your choice: \n";
        cin >> choice;
        system("cls");

        switch (choice)
        {
        case 1:
            cout << "You have pressed 1 you are now calculating area............\n";
            area();
            break;
        case 2:
            cout << "You have pressed 2 you are now calculating volume............\n";
            vol();
            break;
        case 3:
            cout << "You have pressed 3 you are now Converting Celsius to Farenheit............\n";
            cf();
            break;
        case 4:
            cout << "You have pressed 4 you are now Calculating Simple Interest............\n";
            si();
            break;
        case 5:
            system("cls");

            cout << "Exiting the program................\n";
            cout << "Have a nice day :)\n";
            return 0;

        default:
            cout << "Invalid choice..........try again\n";
        }
        cout << endl
             << endl
             << "Do you want to try again (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y'); // or || operator ha jisme dono me se koi ek condition bhi meet kar gya to true ho jayega otherwise false

    // cin.ignore();
    // cin.get();
    system("cls");
    cout << "Program closed................\n";
    cout << "Have a nice day :)\n";
    return 0;
}
