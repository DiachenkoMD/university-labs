#include <iostream>

using namespace std;

void sortInc3(int &a, int &b, int &c){
    int k;
    if(b > a) {
        k = b;
        b = a;
        a = k;
    }

    if(c > b){
        k = c;
        c = b;
        b = k;
    }

    if(b > a) {
        k = b;
        b = a;
        a = k;
    }
}

int main() {
    int a, b, c;

    for(int i = 1; i <= 2; i++){
        cout << "(" << i << "/2): ";

        cin >> a >> b >> c;

        sortInc3(a, b, c);

        cout << a << " " << b << " " << c << endl;
    }


    return 0;
}

//void sortInc3(int *a, int *b, int *c){
//    int k;
//    if(b > a) {
//        k = *b;
//        *b = *a;
//        *a = k;
//    }
//
//    if(c > b){
//        k = *c;
//        *c = *b;
//        *a = k;
//    }
//
//    if(b > a) {
//        k = *b;
//        *b = *a;
//        *a = k;
//    }
//}

//int main() {
//    int *a, *b, *c;
//
//    for(int i = 1; i <= 2; i++){
//        cout << "(" << i << "/2): ";
//
//        cin >> *a >> *b >> *c;
//
//        sortInc3(a, b, c);
//
//        cout << *a << " " << *b << " " << *c << endl;
//    }
//
//
//    return 0;
//}
