#include <iostream>
#include <string>
using namespace std;

int HexToDec(string s){
    int res = 0;

    for (char c : s){
        res *= 16;
        if (c >= '0' && c <= '9'){
            res += (c - '0');
        }else{
            res += (c - 'A' + 10);
        }
    }

    return res;
}

string DecToBin(int n){
    string res = "0000000000000";

    for (int i = 12; i >= 0; i--){
        res[i] = (n % 2) + '0';
        n /= 2;
    }

    return res;
}

int main(){
    int n;
    string firstHex, sign, secondHex;
    string firstBin, secondBin;
    int firstDec, secondDec;

    cin >> n;

    while (n--){
        cin >> firstHex >> sign >> secondHex;
        firstDec = HexToDec(firstHex);
        secondDec = HexToDec(secondHex);
        firstBin = DecToBin(firstDec);
        secondBin = DecToBin(secondDec);

        cout << firstBin << " " << sign << " " << secondBin << " = ";
        if (sign == "+"){
            cout << firstDec + secondDec << endl;
        }else{
            cout << firstDec - secondDec << endl;
        }
    }

    return 0;
}