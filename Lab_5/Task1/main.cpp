#include <iostream>
#define M_PI 3.14

using namespace std;

double ringS(double r1, double r2) {
    double first_s = r1*r1*M_PI;
    double second_s = r2*r2*M_PI;
    return first_s - second_s;
}

int main() {
    for(int i = 1; i <= 3; i++){
        cout << "(" << i << "/3" << "): ";
        double r1, r2;
        cin >> r1 >> r2;

        cout << ringS(r1, r2) << endl;
    }
    return 0;
}
