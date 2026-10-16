#include <iostream>
#include <algorithm>
using namespace std;

// int cal_decimal(string binary){
//     int decimal = 0;
//     int n = 1;

//     reverse(binary.begin(), binary.end());

//     for (int b : binary){
//         decimal += (b - '0') * n;
//         n *= 2;
//     }

//     return decimal;
// }

int cal_decimal(string binary){
    int decimal = 0;

    for (int i = 0; i < binary.size(); ++i){
        decimal = decimal * 2 + (binary[i] - '0');
    }

    return decimal;
}

int main(){
    string block;
    int flag = 1;
    string binary = "";

    while (cin >> block && block != "~"){
        if (block == "#"){
            cout << cal_decimal(binary) << endl;
            flag = 1;
            binary = "";
        }else if (block.size() == 1){
            flag = 1;
        }else if (block.size() == 2){
            flag = 0;
        }else{
            int times = block.size() - 2;
            for (int i = 0; i < times; ++i){
                binary += to_string(flag);
            }
        }
    }
    return 0;
}