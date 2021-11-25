#include <iostream>

using namespace std;

int getSquare(int width, int height){
    int result = 0;
    for(int i = 0; i < width; i++){
        result += height;
    }
    return result;
}

int main() {

    int a,b,c;

    cin >> a >> b >> c;

    int addedBoxes = 0;

    while(b - c >= 0){
        int resetA = a;
        while(resetA - c >= 0){
            addedBoxes++;
            resetA -= c;
        }
        b -= c;
    }

    int boxesSquare = getSquare(c, c) * addedBoxes;
    int fullSquare = getSquare(a, b);

    int leftSpace = fullSquare - boxesSquare;

    cout << leftSpace << endl;

    return 0;
}

