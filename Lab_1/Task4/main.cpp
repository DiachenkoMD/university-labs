#include <iostream>
using namespace std;

int main() {
    int a;

    cin >> a;

    int f_char = a / 100; // first character
    int s_char = (a / 10) % 10; // second character
    int t_char = a % 10; // third character

    a = s_char*100 + f_char*10 + t_char;

    cout << a;

    return 0;
}
