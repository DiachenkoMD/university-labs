#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if(a < b){
        int sum = 0;
        for(int i = a; i <= b; i++){
            sum += i;
        }

        cout << sum << endl;
    }else{
        cout << "The value of a must be less than b (a < b)" << endl;
    }


    return 0;
}
