#include <iostream>
using namespace std;

double avg(double a, double b){
    return ((a+b)/2);
}

double avg(float a, float b){
    return ((a+b)/2);
}

int main() {
    double a;
    float b;

    cin >> a >> b;

    cout << avg(a, b) << endl;

    return 0;
}
