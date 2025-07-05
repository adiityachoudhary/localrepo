#include <iostream>
#include <string.h> //C  standard library

using namespace std;

int main()
{
    char *ptr = "Hello"; // character pointer
    ptr = "Goodbye";
    cout << ptr << endl;

    char cwh[] = "CodeWith";
    char st[] = "Harry";
    char target[10];

    cout << "target now contains st[] : " << strcpy(target, st) << endl; //st will be copied to target

    cout << "cwh now contains cwh + st[] " << strcat(cwh, st) << endl; //"CodeWith" Conecatenated with "Harry"

    cout << "Comparing cwh with st[] " << strcmp(target, st) << endl; //strcmp will compare the ASCII value of target with st 

    return 0;
}