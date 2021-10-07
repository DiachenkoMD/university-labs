#include <iostream>
using namespace std;
int main() {

    int a, b, c;

    cin >> a >> b >> c;

    int tmp;

    if(a - b > 0){
        tmp = a;
        a = b;
        b = tmp;
    }

    if(b - c > 0){
        tmp = c;
        c = b;
        b = tmp;
    }

    if(a - b > 0){
        tmp = a;
        a = b;
        b = tmp;
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}
