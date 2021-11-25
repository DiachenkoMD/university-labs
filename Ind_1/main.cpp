#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

double f(double x){
    return x;
}

int main() {
    ofstream out;

    out.open("D://Projects/C++/university-labs/Ind_1/last_op.txt");

    double a, b;

    cin >> a >> b;

    double h;

    double realValue = (2.0/3 * b * sqrt(b)) - (2.0/3 * a * sqrt(a));

    for(int n = 10; n <= 100; n += 10){

        // Calculating the step
        h = (b-a) / n;

        // Counting the split value
        double splitValue = (f(a) + f(b)) / 2;

        for(int j = 1; j < n; j++){
            splitValue += f(a + h * j);
        }


        // Counting the final value
        double result = h * splitValue;

        out << "n=" << n << "  " << result << "  " << realValue - result << endl;
        cout << "n=" << n << "  " << result << "  " << realValue - result << endl;
    }

    out.close();

    return 0;
}

