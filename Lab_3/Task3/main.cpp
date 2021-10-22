#include <iostream>
using namespace std;

int main() {
    int n, k = 0, sum = 0;

    cout << "N (N>0):";

    cin >> n;

    while(sum + k <= n){
        sum += k;
        k++;
    }
    k--;

    cout << "K: " << k << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}
