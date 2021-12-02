#include <iostream>
#include <iomanip>


using namespace std;

double store[2];
const double eps = 1e-3;

double rec(double, int, double, double);

double rec(double);

double iter(double);

double tabulate(double, int, double (*)(double));

double render(double, double, int);

int main() {
    double a, b;
    int n;

    cin >> a >> b >> n;

    render(a, b, n);

    return 0;
}


double rec(double result, double i, double prevN, double prevD){
    prevN *= store[0];
    prevD *= store[1];

    double op_value = prevN / ((i+2) * prevD);

    result += op_value;

    if(fabs(op_value) > eps){
        return rec(result, i+2, prevN, prevD);
    }else{
        return result;
    }
}

double rec(double x){
    double prevN = x-1;
    double prevD = x+1;
    return rec((prevN/prevD), 0, prevN, prevD);
}

double iter(double x){
    double prevNumerator = x - 1;
    double prevDenominator = x + 1;

    int i = 1;

    double op_value = prevNumerator / prevDenominator;

    double result = op_value;

    while(fabs(op_value) > eps){
        prevNumerator *= store[0];
        prevDenominator *= store[1];

        op_value = prevNumerator / ((i+2) * prevDenominator);

        result += op_value;

        i++;
    }

    return result;
}

double tabulate(double x, double (*func)(double)){
    return 2*func(x);
}

double render(double a, double b, int n){
    double h = (b - a) / n;

    cout << "x" << setw(15) << "iter" << setw(15) << "std" << setw(15) << "rec" << endl;

    while(a + h <= b){
        store[0] = pow(a-1, 2);
        store[1] = pow(a+1, 2);

        cout << a << setw(15) << tabulate(a, iter) << setw(15) << log(a) << setw(15) << tabulate(a, rec) << endl;
        a += h;
    }
}