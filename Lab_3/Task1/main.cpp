#include <iostream>

using namespace std;

int main() {

    int a,b,c;

    cin >> a >> b >> c;

//    int filledSpace = 0;
//
//    int fullSpace = 0;
//    for(int i = 0; i < b; i++){
//        fullSpace += b;
//    }

    int addedBoxes = 0;


    while(b - c >= 0){
        int resetA = a;
        while(resetA - c >= 0){
            addedBoxes++;
            resetA -= c;
        }
        b -= c;
    }

    cout << addedBoxes << endl;

    return 0;
}

