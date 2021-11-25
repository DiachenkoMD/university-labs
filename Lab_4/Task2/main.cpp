#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    double result = 0;
    int z = 1;
    for(int i = 1; i <= n; i++){
        result += (1.0/(2*i - 1) * z);
        z = -z;
    }

    cout << result << endl;
    return 0;
}
