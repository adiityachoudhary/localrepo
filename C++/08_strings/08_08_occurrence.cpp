#include <iostream>
#include <string.h> //C standard library

using namespace std;
int occurrence(char[], char);
int occurrence(char s1[], char c)
{
    int count = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str1[] = "Hello World";
    char ch;
    cout<<"Enter a character to find occurrence : ";
    cin>>ch;
    cout <<ch<<" is present in "<<str1<<" "<<occurrence(str1, ch)<<" is times";
    return 0;
}