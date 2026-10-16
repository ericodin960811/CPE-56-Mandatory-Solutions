#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // 沒加速 zerojudge 會 tle

    int n;

    cin >> n;

    while (n--){
        string a, b, c, d;

        cin >> a >> b >> c >> d;

        string line = a + b + c + d;
        int evenSum = 0;
        int oddSum = 0;

        for (int i = 0; i < line.size(); ++i){
            if (i % 2 == 0){
                if (line[i] - '0' >= 5){
                    evenSum += 1;
                    evenSum += (line[i] - '0') * 2 - 10;
                }else{
                    evenSum += (line[i] - '0') * 2;
                }
            }else{
                oddSum += line[i] - '0';
            }
        }

        if ((oddSum + evenSum) % 10 == 0){
            cout << "Valid\n"; // 加速
        }else{
            cout << "Invalid\n";
        }
    }

    return 0;
}