#include <iostream>
using namespace std;
#include <math.h>

#define Pi 3.14

int main() {
    setlocale(LC_ALL, "Russian");
    float r, h;
    cin >> r >> h;

    float s_side = 2*Pi*r*h;
    float s_osn = 2*Pi*pow(r, 2);

    float s_full = s_side + s_osn*2;

    float v = Pi*pow(r,2)*h;

    cout << "Square 1: " << s_full << endl;
    cout << "Square 2: " << v << endl;

}
