#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
    int num1;
    cout << "Enter a number to countdown:\n";
    cin >> num1;
    while (num1 >=1)
    {
        cout << num1 << "\n";
        num1 = num1 - 1;
        Sleep(1000);
    }
    cout << "The countdown is over!\n";
    return 0;
}