#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;

    int digits = 0;
    int tmpNumber = n;
    while (tmpNumber>0){
        tmpNumber /= 10;
        digits++;
    }

    for(int i = 0; i < digits; i++){
        if(i % 2){
            oddSum += n % 10;
        }else{
            evenSum += n % 10;
        }
        n /= 10;
    }

    bool isDividable = (oddSum == evenSum) || !((oddSum-evenSum) % 11) || !((evenSum-oddSum) % 11);

    cout << (isDividable ? "Dividable" : "Not Dividable") << endl;

    return 0;
}


