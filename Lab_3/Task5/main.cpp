#include <iostream>
using namespace std;
int main() {

    int s;

    cin >> s;

    int fVar = 1;
    int sVar = 1;

    int k = 2;
    int sum = 2;

    if(s <= 0){
        cout << "Number should be greater than 0" << endl;
        return 0;
    }else if(s == 1){
        k = 1;
        sum = 1;
    }else{
        while(sum + fVar + sVar < s){
            int fibNumber = fVar + sVar;

            sum += fibNumber;

            fVar = sVar;
            sVar = fibNumber;

            k++;
        }
    }

    cout << "The lowest K: " << k << endl;
    cout << "The sum: " << sum << endl;


    return 0;
}
