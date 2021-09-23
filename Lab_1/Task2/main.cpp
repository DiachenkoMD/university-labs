#include <iostream>
using namespace std;
#include <math.h>

#define Pi 3.14

int main() {
    float r, h;
    cin >> r >> h;

    float s_side = 2*Pi*r*h;
    float s_osn = 2*Pi*pow(r, 2);

    float s_full = s_side + s_osn*2;

    float v = Pi*pow(r,2)*h;

    cout << "Surface area: " << s_full << endl;
    cout << "Volume: " << v << endl;

}
