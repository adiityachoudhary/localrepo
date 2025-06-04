#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int phy, chem, maths;
    cout << "Enter your marks of each subject\n";
    cout << "Physics: ";
    cin >> phy;
    cout << "Chemistry: ";
    cin >> chem;
    cout << "Maths: ";
    cin >> maths;

    float perc = (phy + chem + maths) / 3.0;

    if (phy >= 33 && chem >= 33 && maths >= 33)
        if (perc >= 40)
            cout << "Congratulations!! You have passed with " << perc << "%" << endl;
        else
            cout << "OOPS!! you have failed with " << perc << "%" << endl;

    if (phy < 33)
        cout << "OOPS!! Your marks in PHYSICS: " << phy << "%, which is below the required 33%" << endl;

    if (chem < 33)
        cout << "OOPS!! Your marks in CHEMISTRY: " << chem << "%, which is below the required 33%" << endl;

    if (maths < 33)
        cout << "OOPS!! Your marks in MATHS: " << maths << "%, which is below the required 33%" << endl;

    if (perc < 33)
        cout << "- Your overall percentage is " << perc << "%, which is below the required 40%" << endl;

    cin.ignore();
    cin.get();
    system("cls");
    return 0;
}