#include <iostream>
using namespace std;

#define Pi 3.14

int main() {

    float r, h;
    cin >> r >> h;

    float s_side = 2*Pi*r*h; // Side surface area
    float s_osn = Pi*pow(r, 2); // Bottom surface area

    float s_full = s_side + s_osn*2; // Full surface area

    float v = Pi*pow(r,2)*h; // Cylinder volume

    cout << "Surface area: " << s_full << endl;
    cout << "Volume: " << v << endl;

}
