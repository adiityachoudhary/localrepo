/*
1->Snake
2->Water
3->Gun
*/
#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
void choice(string, int), think();

void choice(string s, int n) //choice function
{
    system("Color 02");
    if (n == 1)
        cout << s << "'s choice is SNAKE\n";
    else if (n == 2)
        cout << s << "'s choice is WATER\n";
    else if (n == 3)
        cout << s << "'s choice is GUN\n";
}
void think()
{
    for (int i = 0; i < 10; i++)
    {
        Sleep(50);
        cout << ".";
    }
    cout << endl;
}

int main()
{
    int user_input, system;
    char again;
    cout << "Project 2 : Snake, Water and Gun\n";

    do
    {
        cout << "Enter your choice:-\n1->Snake\n2->Water\n3->Gun\n->";

        cin >> user_input; // user's choice
        choice("User", user_input);

        srand(time(0)); // system's choice
        system = (rand() % 3) + 1;
        choice("System", system);
        
        // comparison of choices
        think();
        if (user_input == 1 && system == 2 || user_input == 2 && system == 3 || user_input == 3 && system == 1)
        cout << "Hurray!! Your Won\n";
        else if (user_input == system)
        cout << "It's a tie\n";
        else
        cout << "OOPS!! Your Lost\n";
        
        cout << "Play again y/n: ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    cout << "Game Closed";
    return 0;
}