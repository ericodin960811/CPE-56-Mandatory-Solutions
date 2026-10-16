#include <iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while (t--){
        int minSum = 999999;

        cin >> n;

        for (int a = 1; a <= 10; ++a){
            for (int b = a; b <= 31; ++b){
                int c = n / a / b;

                if (a * b * c == n && b <= c){
                    minSum = min(minSum, (a * b + b * c + c * a) * 2);
                }
            }
        }

        cout << minSum << endl;
    }

    return 0;
}
