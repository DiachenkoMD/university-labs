#include <iostream>

using namespace std;

string isPowerN(int k, int n){
    int incremented = 1;

    while(incremented < k){
        incremented *= n;
    }

    return (incremented == k) ? "true" : "false";
}

int main() {
    int k, n;

    for(int i = 1; i <= 5; i++){
        cout << "(" << i << "/5" << "): ";
        cin >> k >> n;
        cout << isPowerN(k, n) << endl;
    }
    return 0;
}
