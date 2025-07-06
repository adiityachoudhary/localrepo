#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};

int compare(struct Date, struct Date);
int compare(struct Date x, struct Date y)
{ /*if year is in future return 1
     if year is in past return -1
     if dates are same return 0 and so on*/

    if (x.year == y.year && x.month == y.month && x.day == y.day)
        return 0;
    else if (x.year < y.year)
        return -1;
    else if (x.year > y.year)
        return 1;

    else if (x.month < y.month)
        return -1;
    else if (x.month > y.month)
        return 1;

    else if (x.day < y.day)
        return -1;
    else if (x.day > y.day)
        return 1;
}
int main()
{
    struct Date d1, d2;
    d1 = {15, 05, 2020};
    d2 = {30, 05, 2020};

    int c = compare(d1, d2);

    if (c < 0)
        cout << "d1 comes earlier than d2";
    else if (c > 0)
        cout << "d1 comes afer d2";
    else if (c == 0)
        cout << "Both dates are same";
    return 0;
}