#include <iostream>
using namespace std;
int main() {

    int n, k;

    cin >> n;

    k = n;

    while(k*k > n){
        k /= 2;
    }

    cout << "The lowest K: " << k << endl;

    return 0;
}
