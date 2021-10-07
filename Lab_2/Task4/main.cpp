#include <iostream>

using namespace std;

int main() {

    int n, v;

    cin >> n >> v;

    switch(n){
        case 1: {
            float a = (float) v;
            cout << "> Millimeters: " << a << endl;
            cout << "Centimeters: " << a / 10 << endl;
            cout << "Decimeters: " << a / 100 << endl;
            cout << "Meters: " << a / 1000 << endl;
            cout << "Kilometers: " << a / 1000000 << endl;
            break;
        }
        case 2: {
            float a = (float) v;
            cout << "Millimeters: " << a * 10 << endl;
            cout << "> Centimeters: " << a << endl;
            cout << "Decimeters: " << a / 10 << endl;
            cout << "Meters: " << a / 100 << endl;
            cout << "Kilometers: " << a / 100000 << endl;
            break;
        }
        case 3: {
            float a = (float) v;
            cout << "Millimeters: " << a * 100 << endl;
            cout << "Centimeters: " << a * 10 << endl;
            cout << "> Decimeters: " << a << endl;
            cout << "Meters: " << a / 10 << endl;
            cout << "Kilometers: " << a / 10000 << endl;
            break;
        }
        case 4: {
            float a = (float) v;
            cout << "Millimeters: " << a * 1000 << endl;
            cout << "Centimeters: " << a * 100 << endl;
            cout << "Decimeters: " << a * 10 << endl;
            cout << "> Meters: " << a << endl;
            cout << "Kilometers: " << a / 1000 << endl;
            break;
        }
        case 5: {
            float a = (float) v;
            cout << "Millimeters: " << a * 1000000 << endl;
            cout << "Centimeters: " << a * 100000 << endl;
            cout << "Decimeters: " << a * 10000 << endl;
            cout << "Meters: " << a * 1000 << endl;
            cout << "> Kilometers: " << a << endl;
            break;
        }
    }

    return 0;
}
