#include <iostream>
using namespace std;

int main() {

    double a, n;

    cin >> a >> n;

    double result = 1;

    double collector = 1;

    int sc = 1; // stands for Sign Changer

    for(int j = 1; j <= n; j++){
        collector *= a;
        result += (collector * sc);
        sc = -sc;
    }

    cout << result << endl;
}