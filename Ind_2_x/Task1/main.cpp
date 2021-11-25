#include <iostream>


using namespace std;

double store[2];
const double eps = 1e-3;

double iter(double x){

    double prevNumerator = x - 1;
    double prevDenominator = x + 1;

    int i = 1;

    double op_value = prevNumerator / prevDenominator;

    double sum = op_value;

    while(fabs(op_value) > eps){
        prevNumerator *= store[0];
        prevDenominator *= store[1];

        op_value = prevNumerator / ((i+2) * prevDenominator);

        sum += op_value;

        i++;
    }

    return sum;
}


int main() {
    double x;

    store[0] = x - 1;
    store[1] = x + 1;

    cin >> x;

    double result = iter(x);
    cout << "Iter - Result: " << 2*result << endl;
    cout << "Tolerance: " << log(x) - result << endl;

    return 0;
}
