#include <iostream>
#include <math.h>

using namespace std;

#define Pi 3.14

int main() {

    float a, x, b;

    cin >> a >> x >> b;

    float y;

    if(a <= x && b >= x){
        y = (2-x)/sqrt(fabs(x+1));
    }else{
        y = pow(10, 7)*pow(sin((a*x*Pi) / 180),5);
    }

    cout << "Result: " << y;
    return 0;
}
