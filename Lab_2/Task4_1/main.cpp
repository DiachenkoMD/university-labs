#include <iostream>

using namespace std;

int main() {

    int n;
    float v;

    cin >> n >> v;

    float mil, cen, dec, met, kil;

    switch(n){
        case 1: {
            mil = v;
            cen = v / 10;
            dec = v / 100;
            met = v / 1000;
            kil = v / 1000000;
            break;
        }
        case 2: {
            mil = v * 10;
            cen = v;
            dec = v / 10;
            met = v / 100;
            kil = v / 100000;
            break;
        }
        case 3: {
            mil = v * 100;
            cen = v * 10;
            dec = v;
            met = v / 10;
            kil = v / 10000;
            break;
        }
        case 4: {
            mil = v * 1000;
            cen = v * 100;
            dec = v * 10;
            met = v;
            kil = v / 1000;
            break;
        }
        case 5: {
            mil = v * 1000000;
            cen = v * 100000;
            dec = v * 10000;
            met = v * 1000;
            kil = v;
            break;
        }
    }

    cout << "Millimeters: " << mil << endl;
    cout << "Centimeters: " << cen << endl;
    cout << "Decimeters: " << dec << endl;
    cout << "Meters: " << met << endl;
    cout << "Kilometers: " << kil << endl;

    return 0;
}
