#include <iostream>

using namespace std;

void invDigits(int &k){
    int tmp = k;
    k = 0;
    while(tmp != 0){
        k = k * 10 + tmp % 10;
        tmp /= 10;
    }
}

int main() {
    int k;

    for(int i = 1; i <= 5; i++){
        cout << "(" << i << "/5" << "): ";
        cin >> k;

        invDigits(k);

        cout << k << endl;
    }

    return 0;
}
