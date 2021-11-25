#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    double previousA = 2;
    for(int i = 1; i <= n+1; i++){
        cout << "A"<< i-1 << " = " << previousA << endl;
        previousA = 2 + (1/previousA);
    }

    return 0;
}
