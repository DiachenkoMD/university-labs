#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;

    //Looping numbers


    bool isDividable = (oddSum == evenSum) || !((oddSum-evenSum) % 11) || !((evenSum-oddSum) % 11);

    cout << (isDividable ? "Dividable" : "Not Dividable") << endl;

    return 0;
}


