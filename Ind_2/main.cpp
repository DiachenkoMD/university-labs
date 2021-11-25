#include <iostream>


using namespace std;

double store[4];
const double eps = 1e-3;

double rec(double value, int i){
    store[0] = store[0] * store[2];
    store[1] = store[1] * store[3];

    double op_value = store[0] / ((i+2) * store[1]);

    value += op_value;

    if(fabs(op_value) > eps){
        return rec(value, i+2);
    }else{
        return value;
    }
}


double iter(double x){

    double prevNumerator = x - 1;
    double prevDenominator = x + 1;

    int i = 1;

    double op_value = prevNumerator / prevDenominator;

    double sum = op_value;

    while(fabs(op_value) > eps){
        prevNumerator *= store[2];
        prevDenominator *= store[3];

        op_value = prevNumerator / ((i+2) * prevDenominator);

        sum += op_value;

        i++;
    }

    return sum;
}

void(a, b, n, ())

int main() {
    double x;

    cin >> x;

    store[0] = x-1;
    store[1] = x+1;
    store[2] = pow(x-1, 2);
    store[3] = pow(x+1, 2);

    double startValue = store[0] / store[1];

    double result = rec(startValue, 1);
    cout << "Rec - Result: " << 2*result << endl;
    cout << "Tolerance: " << log(x) - result<< endl;

    result = iter(x);
    cout << "Iter - Result: " << 2*result << endl;
    cout << "Tolerance: " << log(x) - result << endl;

    return 0;
}
