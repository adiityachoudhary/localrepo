// Number guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    system("cls");
    int guess, attempt = 0;
    srand(time(0));                  // initialize random no.
    int random = (rand() % 100) + 1; // random no. by dividing by 100 and gives no. between 1-99 therefore +1
    // cout << random << "\n";

    do
    {
        cout << "Guess the no.: ";
        cin >> guess;

        if (guess > random)
            cout << "LOWER no. please...\n";
        else if (guess < random)
            cout << "HIGHER no. please...\n";
        else
            cout << "Congrats...\n";        

        attempt++;
    } while (guess != random);

    cout << "Congrats... you guessed the right no. " << random << " in " << attempt << " guesses";
    return 0;
}