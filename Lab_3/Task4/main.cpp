#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;

    //Getting number digits
    int digitsCounter = 1;
    while(n > pow(10, digitsCounter)){
        digitsCounter++;
    }

    //Looping numbers
    for(int i = 1; i <= digitsCounter; i++){
        int lastNumber = (n % (int)pow(10, i)) / pow(10, i-1);
        if(i % 2){
            oddSum += lastNumber;
        }else{
            evenSum += lastNumber;
        }
    }

    bool isDividable = (oddSum == evenSum) || !((oddSum-evenSum) % 11) || !((evenSum-oddSum) % 11);

    cout << (isDividable ? "Dividable" : "Not Dividable") << endl;

    return 0;
}


