// 1 способ: яблоки до 10 включительно
#include <iostream>
#include <string>
using namespace std;
int main()
{
    system("chcp 65001");
    int k;
    string apple = "яблок";
    cout<<"Введите число яблок:\n";
    cin >> k;
    switch(k)
    {
        case 2: case 3: case 4:
            apple = apple + "а";
            cout << k << ' ' << apple << endl;
            break;
        case 1: apple = apple +"о";
            cout << k << ' ' << apple << endl;
            break;
        case 5: case 6: case 7: case 8: case 9: case 10:
            apple = apple;
            cout << k << ' ' << apple << endl;
            break;
        default:
            cout << "Очень большое число!";
            break;

    }

    return 0;
}

// 2 способ: более распространенный на кол-во яблок
#include <string>
using namespace std;
int main()
{
    system("chcp 65001");
    int k;
    string apple = "яблок";
    cout<<"Введите число яблок:\n";
    cin >> k;
    {
        if ((k==1) || (k % 10 == 1)) {
            apple = apple +"о";
        }
        if ((k > 1 && k < 5) || (k % 10 > 1 && k % 10 < 5)) {
            apple = apple + "а";
        }
        if ((k >= 5 && k < 10) || (k % 10 >= 5 && k % 10 < 10) || (k % 100 > 10 && k % 100 < 15 )) {
            apple = "яблок";
        }

        cout << k << ' ' << apple << endl;

    }
}