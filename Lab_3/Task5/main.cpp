#include <iostream>
using namespace std;
int main() {

    int s;

    cin >> s;

    int fVar = 1;
    int sVar = 1;

    int k = 2;
    int sum = 0;
    
    while(sum < s){
        int fibNumber = fVar + sVar;

        sum += fibNumber;

        fVar = sVar;
        sVar = fibNumber;

        k++;
    }

    cout << "The lowest K: " << k << endl;
    cout << "The sum: " << sum << endl;


    return 0;
}
