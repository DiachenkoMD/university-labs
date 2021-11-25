#include <iostream>
using namespace std;
int main() {

    double x, n;

    cin >> x >> n;

    double result = 1;

    double powCol = 1;
    double factCol = 1;

    for(int j = 1; j <= n; j++){
        powCol *= x;
        factCol *= j;

        result += powCol / factCol;
    }

    cout << result << endl;
}