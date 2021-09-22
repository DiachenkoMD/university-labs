#include <iostream>

using namespace std;

int main() {
    int max_packet_w = 12;
    int max_box_w = max_packet_w * 5;
    int max_con_w = max_box_w * 5;

    int weight;

    cin >> weight;

    int c_num = 0, b_num = 0, p_num = 0;

    if(weight >= max_con_w){
        c_num = weight / max_con_w;
        weight = weight % max_con_w;
    }

    if(weight >= max_box_w){
        b_num = weight / max_box_w;
        weight = weight % max_box_w;
    }

    if(weight >= max_packet_w){
        p_num = weight / max_packet_w;
        weight = weight % max_packet_w;
    }

    cout << "Full containers num: " << c_num << endl;
    cout << "Full boxes num: " << b_num << endl;
    cout << "Full packets num: " << p_num << endl;

    return 0;
}
