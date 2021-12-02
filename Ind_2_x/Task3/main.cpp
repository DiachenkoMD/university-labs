#include <iostream>
#include <iomanip>


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

double rec(double value){
    rec(value, 1);
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

void tabulate(double a, double b, double n){
    double h = (b - a) / n;

    cout << "x" << setw(15) << "iter" << setw(15) << "std" << setw(15) << "rec" << endl;

    while(a + h <= b){

        store[0] = a-1;
        store[1] = a+1;
        store[2] = pow(a-1, 2);
        store[3] = pow(a+1, 2);

        double startValue = store[0] / store[1];

        cout << a << setw(15) << 2*iter(a) << setw(15) << log(a) << setw(15) << 2*rec(startValue, 1) << endl;
        a += h;
    }
}

int main() {
    double a, b, n;

    cin >> a >> b >> n;

    tabulate(a, b, n);

    return 0;
}

