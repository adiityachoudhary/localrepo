#include <iostream>
using namespace std;
typedef struct
{
    int day;
    int month;
    int year;
} Date;

int compare(Date, Date);
int compare(Date x, Date y)
{
    if (x.year < y.year)
        return -1;
    if (x.year > y.year)
        return 1;

    if (x.month < y.month)
        return -1;
    if (x.month > y.month)
        return 1;

    if (x.day < y.day)
        return -1;
    if (x.day > y.day)
        return 1;

    return 0;
}
int main()
{
    Date d1, d2;
    d1 = {15, 05, 2020};
    d2 = {30, 05, 2020};

    int c = compare(d1, d2);

    if (c < 0)
        cout << "d1 comes earlier than d2";
    else if (c > 0)
        cout << "d1 comes afer d2";
    else
        cout << "Both dates are same";
    return 0;
}