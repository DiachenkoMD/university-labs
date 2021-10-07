#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int age;

    cin >> age;

    switch (age) {
        case 1: {
            cout << "1 рік";
            break;
        }
        case 2: {
            cout << "2 роки";
            break;
        }
        case 3: {
            cout << "3 роки";
            break;
        }
        case 4: {
            cout << "4 роки";
            break;
        }
        case 5: {
            cout << "5 років";
            break;
        }
        case 6: {
            cout << "6 років";
            break;
        }
        case 7: {
            cout << "7 років";
            break;
        }
        case 8: {
            cout << "8 років";
            break;
        }
        case 9: {
            cout << "9 років";
            break;
        }
        case 10: {
            cout << "10 років";
            break;
        }
        default:
            cout << "Дівчинка не може будти на стільки дорослою!";
            break;
    }

    return 0;
}
