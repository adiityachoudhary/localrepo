#include <iostream>
using namespace std;
struct customer
{
    int account;
    string ifsc;
    string name;
    double balance;
};

int main()
{
    struct customer c[4];
    c[0] = {123456789, "SBI00DELHI", "ADITYA CHOUDHARY", 100.58};
    c[1] = {456218957, "SBI00MUMBAI", "ANIKET KUMAR", 1000.95};
    c[2] = {784159621, "SBI00PUNE", "RAHUL SINGH", 1000.98};
    c[3] = {786786786, "SBI00BUXAR", "PRAKASH KUMAR", 1000.96};

    for (int i = 0; i < 4; i++)
    {
        cout << "Account Name: " << c[i].name << "\tAccount No.: " << c[i].account << "\tIFSC: " << c[i].ifsc << "\tBalance:" << c[i].balance << "\n";
    }
    cin.get();
    return 0;
}