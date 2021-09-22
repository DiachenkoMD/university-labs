#include <iostream>
using namespace std;
int main() {

    int k,p,t, tmp;
    cin >> k >> p >> t;

    tmp = k;
    k = p;
    p = t;
    t = tmp;

    cout << "K: " << k << endl;
    cout << "P: " << p << endl;
    cout << "T: " << t << endl;

    return 0;
}
