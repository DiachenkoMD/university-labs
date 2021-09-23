#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846
#define M_E 2.71828182845904523536

using namespace std;

int main() {

    int x, a;

    cin >> x >> a;

    double numerator = 2*cos((M_PI*x)/180) + sqrt(3)*sin(4*a)-1;
    double denominator = 2*sin(pow((M_PI*a)/180, 2))+cos((M_PI*42)/180)-pow(M_E, pow(x, 1.0/3));

    float result = numerator / denominator;

    cout << "The result is " << result << endl;

    return 0;
}
