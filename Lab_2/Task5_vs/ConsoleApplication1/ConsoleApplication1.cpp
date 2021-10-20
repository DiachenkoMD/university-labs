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
        case 2: case 3: case 4:{
            cout << age << " роки" << endl;
            break;
        }
        case 5: case 6: case 7: case 8: case 9: case 10:{
            cout << age << " років" << endl;
            break;
        }
        default:
            cout << "Дитина не може будти на стільки дорослою!" << endl;
            break;
    }

    return 0;
}
