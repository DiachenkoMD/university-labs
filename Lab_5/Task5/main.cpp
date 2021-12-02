#include <iostream>
using namespace std;

char avg (char a, char b){
    return ((a + b) / 2);
}

long avg (long a, long b){
    return ((a + b) / 2);
}

double avg (double a, double b){
    return ((a + b) / 2);
}

int main() {
    char c_a, c_b;

    cin >> c_a >> c_b;
    cout << "For char: " << avg(c_a, c_b) << endl;

    long l_a, l_b;

    cin >> l_a >> l_b;
    cout << "For long: " << avg(l_a, l_b) << endl;

    float f_a, f_b;

    cin >> f_a >> f_b;
    cout << "For float: " << avg(f_a, f_b) << endl;

    return 0;
}
