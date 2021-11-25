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

    return 0;
}
