#include <iostream>
using namespace std;

int main() {

    float a, x, b;

    cin >> a >> x >> b;

    float y;

    if(a <= x && b >= x){
        y = (2-x)/sqrt(fabs(x+1));
    }else{
        y = 10e7*pow(sin(a*x),5);
    }

    cout << "Result: " << y;
    return 0;
}
