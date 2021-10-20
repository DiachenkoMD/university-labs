#include <iostream>

using namespace std;

int main() {

    int radius = 3;

    int x, y;

    cin >> x >> y;

    bool isInFirstCircle = ((pow(radius,2) - pow(0-x, 2) - pow(0-y, 2)) >= 0);
    bool isInSecondCircle = ((pow(radius,2) - pow(3-x, 2) - pow(0-y, 2)) >= 0);

    cout << ((isInFirstCircle && isInSecondCircle) ? "true" : "false") << endl;

    return 0;
}
