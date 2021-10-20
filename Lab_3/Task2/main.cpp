#include <iostream>
using namespace std;
int main() {

    int n, k;

    cin >> n;

    k = n;

    int iterations = 0; // how many operations does it take to find the right number

    while(pow(k, 2) > n){
        k /= 2;
        iterations++;
    }

    while(pow(k, 2) <= n){
        k++;
        iterations++;
    }

    cout << "The lowest K: " << k << endl;
    cout << "Iterations: " << iterations;

    return 0;
}
