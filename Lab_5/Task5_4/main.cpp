#include <iostream>

using namespace std;

template <typename T>
T avg(T a, T b){
    return ((a+b) / 2);
}


int main() {
    double a, b;

    cin >> a >> b;

    cout << avg(a, b) << endl;

    return 0;
}
