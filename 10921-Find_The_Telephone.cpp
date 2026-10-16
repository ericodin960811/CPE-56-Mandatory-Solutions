#include <iostream>
using namespace std;

string s;

int main(){
    while (cin >> s){
        for (char c : s){
            if (c >= 'A' && c <= 'C') cout << '2';
            else if (c >= 'D' && c <= 'F') cout << '3';
            else if (c >= 'G' && c <= 'I') cout << '4';
            else if (c >= 'J' && c <= 'L') cout << '5';
            else if (c >= 'M' && c <= 'O') cout << '6';
            else if (c >= 'P' && c <= 'S') cout << '7';
            else if (c >= 'T' && c <= 'V') cout << '8';
            else if (c >= 'W' && c <= 'Z') cout << '9';
            else cout << c;
        }
        cout << endl;
    }
    return 0;
}