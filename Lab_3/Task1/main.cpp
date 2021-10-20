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

    int filledSpace = 0;
    int fullSpace = getSquare(a, b);


    int filledHeight = 0;
    while(filledHeight + c <= b){
        int filledWidth = 0;
        while(filledWidth + c <= a){
            filledWidth += c;
        }

        filledSpace += getSquare(c, filledWidth);

        filledHeight += c;
    }

    cout << "Full Space: " << fullSpace << endl;
    cout << "Filled Space: " << filledSpace << endl;
    cout << "Left Space: " << fullSpace - filledSpace << endl;

    return 0;
}

