#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "Enter your operation + or - or * or /:\n";
    cin >> op;
    cout << "Enter first numbers:\n";
    cin >> num1;
    cout << "Enter second numbers:\n";
    cin >> num2;
    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            cout << "Operation not find";
            break;
    }
    return 0;
}