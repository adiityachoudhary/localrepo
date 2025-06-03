#include <iostream>
#include <cstdlib>
#include <ctime> //fir time(0) in     srand(time(0)); to get random no. each time we have to used srand(time(0)) otherwise it will give same no. everytime
#include <windows.h>

using namespace std;

int main()
{
    // rock, paper, scissor game
    system("cls");
    int again;
    do
    {

        system("cls");
        cout << "ROCK-PAPER-SCISSOR GAME\n";

        int j;

        srand(time(0));         // to get random no. each time we have to used srand(time(0)) otherwise it will give same no. everytime
        int i = rand() % 3 + 1; // random no. between 3 to 1

        cout << "1-ROCK\n2-PAPER\n3-SCISSORS\n";
        cout << "Enter your choice(1-3): ";
        cin >> j;

        system("cls");

        // User's choice
        if (j == 1)
            cout << "You have chosen ROCK\n";
        else if (j == 2)
            cout << "You have chosen PAPER\n";
        else if (j == 3)
            cout << "You have chosen SCISSORS\n";
        else
            cout << "Invalid Choice.......Choose among 1-3\n";
        Sleep(1500); // Delay in  next execution of code is 1500 miliseconds= 1.5sec

        // System's Choice
        if (i == 1)
            cout << "System has chosen ROCK\n";
        else if (i == 2)
            cout << "System has chosen PAPER\n";
        else
            cout << "System has chosen SCISSORS\n";

        // Logic
        if (j == 1 && i == 3 || j == 2 && i == 1 || j == 3 && i == 2)
            cout << "\nHURRAY!! YOU WON";
        else if (j == i)
            cout << "\nits a TIE!";
        else
            cout << "\nSystem WINS!!\nAreey Computer se haar gya re tu lol";

        // Try again
        cout << endl
             << endl
             << "Press 1 to play again: ";
        cin >> again;
    } while (again == 1);

    system("cls");
    return 0;
}
