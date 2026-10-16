#include <iostream>
using namespace std;

int dp[105][105]; // dp[人數][糖果]

int main(){
    int n, k;

    for (int n = 0; n <= 100; ++n){
        dp[1][n] = 1;
    }

    for (int k = 0; k <= 100; ++k){
        dp[k][0] = 1;
    }

    for (int k = 2; k <= 100; ++k){
        for (int n = 1; n <= 100; ++n){
            dp[k][n] = (dp[k][n - 1] + dp[k - 1][n]) % 1000000;
        }
    }

    while (cin >> n >> k && (n && k)){
        cout << dp[k][n] << endl;
    }

    return 0;
}