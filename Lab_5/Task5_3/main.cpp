#include <iostream>

using namespace std;

double multiply(int a){
    return a * 10;
}

double multiply(int a, int mltv = 10){
    return a * mltv;
}

int main() {

    int a;

    cin >> a;

    cout << multiply(a) << endl;
    cout << multiply(a, 12) << endl;

    return 0;
}
